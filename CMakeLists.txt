cmake_minimum_required(VERSION 3.10.2)
project(IntroSort)

set(CMAKE_CXX_STANDARD 14)

#c

add_executable(IntroSort main.cpp quickSort.h quickSort.cpp commonService.h insertionSort.h insertionSort.cpp heapSort.h heapSort.cpp sortIntro.h sortIntro.cpp)
