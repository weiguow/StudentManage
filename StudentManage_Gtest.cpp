//
// Created by weiguow on 18-10-18.
//
/*
 * 作者：weiguow
 * 单位：中国科学院深圳先进技术研究院数字所异构智能中心
 * 日期：2018-10-18
 * */

//系统库头文件
#include <iostream>
#include <stdio.h>
#include <string>
#include <gtest/gtest.h>

//引入头文件
#include <Chinese.h>
#include <Teacher.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

TEST(TestChinese_get_age,TestCase_1){
    shared_ptr<string> my_name (new string("xiao_ming"));
    unsigned int my_id = 1;
    int age = 24;
    Chinese xiao_ming(my_name, my_id, age);
    unsigned  int xiao_ming_age = xiao_ming.get_age();
    EXPECT_EQ(24,xiao_ming_age);
    EXPECT_EQ(xiao_ming,*xiao_ming.get_name());
}

//Test
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
};
