# 声明要求的 cmake 最低版本
cmake_minimum_required(VERSION 2.8)
# 声明一个 cmake 工程
project( randwalk )

add_executable( randwalk randwalk.cpp vector.cpp  )
# add_executable( randwalk test.cpp vector.cpp  )
