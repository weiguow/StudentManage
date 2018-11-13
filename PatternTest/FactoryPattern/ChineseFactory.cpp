//
// Created by weiguow on 18-10-24.
//
#include <iostream>
#include <memory>
#include <string>

#include <ChineseFactory.h>

using std::string;
using std::shared_ptr;

ChineseFactory::ChineseFactory(shared_ptr<string> type,shared_ptr<string> name, unsigned int id,int age) {
    c_type = type;
    c_name = name;
    c_id = id;
    c_age = age;
}