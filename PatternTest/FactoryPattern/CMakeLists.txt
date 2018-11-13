#CMake处理当前目录
include_directories(${CMAKE_CURRENT_LIST_DIR})

add_executable(FactoryPattern FactoryPattern_main.cpp
        ChineseFactory.h ChineseFactory.cpp
        Student_pattern.h Student_pattern.cpp
        Teacher_pattern.h Teacher_pattern.cpp )

#add_executable(FactoryPattern_test FactoryPattern_main.cpp
#        ChineseFactory.h
#        Student_pattern.h Student_pattern.cpp
#        Teacher_pattern.h Teacher_pattern.cpp )
