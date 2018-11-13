cmake_minimum_required(VERSION 3.5)
project(StudentsManage)

#引入GDB调试
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

set(CMAKE_CXX_STANDARD 11)

#CMake处理当前目录
include_directories(${CMAKE_CURRENT_LIST_DIR})

#管理设计模式
add_subdirectory(PatternTest)

add_executable(StudentsManage StudentManage_Test.cpp
        Chinese.h Chinese.cpp
        Teacher.h Teacher.cpp
        Student.h Student.cpp PatternTest/AdapterPattern/SubjectOperation.h)


#Test for Chinese
#set(weiguo_test_SRC StudentManage_Gtest.cpp Chinese.cpp)
#add_executable(weiguo_gtest_main ${weiguo_test_SRC})
#target_link_libraries(weiguo_gtest_main gtest pthread)