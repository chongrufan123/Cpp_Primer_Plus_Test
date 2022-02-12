#include <iostream>
#include <ctime>
#include <cstdlib>
#include "queue.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(){
    using namespace std;
    srand(time(0)); // random initializing of rand()
    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    Queue line1(qs);
    Queue line2(qs);

    cout << "Enter the number of simulation hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;   // 模拟进行的分钟数

    cout << "Enter the average number of customers per hour: ";
    double perhour;
    double min_per_cust;
    long turnaways; // 因为队列满放弃的人数
    long customers; // 顾客数
    long served;    // 在模拟中服务的总人数
    long sum_line;  // 累计的队列长度
    int wait_time1;  // 正在办理的某人结束办理需要的时间
    int wait_time2;  // 正在办理的某人结束办理需要的时间
    long line_wait; // 正在办理的某人已经等待的时间
    Item temp;          // 顾客数据
    for(perhour = 1; ; perhour++){
        min_per_cust = MIN_PER_HR / perhour;    // 每位顾客平均间隔分钟数
        turnaways = 0; // 因为队列满放弃的人数
        customers = 0; // 顾客数
        served = 0;    // 在模拟中服务的总人数
        sum_line = 0;  // 累计的队列长度
        wait_time1 = 0;  // 正在办理的某人结束办理需要的时间
        wait_time2 = 0;
        line_wait = 0; // 正在办理的某人已经等待的时间

        for (int cycle = 0; cycle < cyclelimit; cycle++){
            if(newcustomer(min_per_cust)){
                if(line1.isfull() && line2.isfull()){
                    turnaways++;
                }
                else{
                    customers++;
                    temp.set(cycle);    // 设置到达时间
                    if(line1.queuecount() > line2.queuecount())
                        line2.enqueue(temp); // 入队
                    else{
                        line1.enqueue(temp);
                    }
                }
            }
            if(wait_time1 <= 0 && !line1.isempty()){  // 上个人已经结束办理且队列不空
                line1.dequeue (temp);    // 出队
                wait_time1 = temp.ptime();   // 办理时间(1 2 3)
                line_wait += cycle - temp.when();   // 此人已经等待的时间
                served++;
            }
            if(wait_time2 <= 0 && !line2.isempty()){  // 上个人已经结束办理且队列不空
                line2.dequeue (temp);    // 出队
                wait_time2 = temp.ptime();   // 办理时间(1 2 3)
                line_wait += cycle - temp.when();   // 此人已经等待的时间
                served++;
            }
            if(wait_time1 > 0){
                wait_time1--;    // 已经办理1min
            }
            if(wait_time2 > 0){
                wait_time2--;    // 已经办理1min
            }
            sum_line += line1.queuecount();  // 当前队列长度
            sum_line += line2.queuecount();  // 当前队列长度
        }   // 时间到
        if((double) line_wait / served > 1)
            break;
    }
    if(customers > 0){
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) sum_line / cyclelimit << endl; // 平均队列长度
        cout << " average wait time: " << (double) line_wait / served << " minutes\n";  // 平均等待时间
        cout << " customer per hour: " << perhour << endl;
    }
    else{
        cout << "No customers!\n";
    }
    cout << "Done!\n";

    return 0;
}

bool newcustomer(double x){
    return(rand() * x / RAND_MAX < 1);
}

