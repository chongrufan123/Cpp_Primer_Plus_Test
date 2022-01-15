#include <iostream>
using namespace  std;
const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int oopleve1;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main(){
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;;
    while(cin.get() != '\n')
        continue;
    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n){
    int i;
    for(i = 0; i < n; i++){
        cout << "Student #" << i + 1 << ": " << endl;
        cout << "The fullname is (q to quit) ";
        cin.getline(pa[i].fullname, SLEN);
        if(pa[i].fullname == "q")
            break;
        cout << "The hobby is ";
        cin.getline(pa[i].hobby, SLEN);
        cout << "The ooplevel is ";
        (cin >> pa[i].oopleve1).get();
    }
    return i;
}

void display1(student st){
    cout << "fullname: " << st.fullname << "\thobby: " << st.hobby << "\tooplevel: " << st.oopleve1 << endl;
}

void display2(const student * ps){
    cout << "fullname: " << ps->fullname << "\thobby: " << ps->hobby << "\tooplevel: " << ps->oopleve1 << endl;
}

void display3(const student pa[], int n){
    for(int i = 0; i < n; i++){
        cout << "Student #" << i+1 << ": " << endl;
        cout << "fullname: " << pa[i].fullname << "\thobby: " << pa[i].hobby << "\tooplevel: " << pa[i].oopleve1 << endl;
    }
}