//
// Created by weiguow on 18-10-24.
//
#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include <Student_pattern.h>

using std::shared_ptr;
using std::string;

Student_pattern::Student_pattern(shared_ptr<string> type, shared_ptr<string> name, unsigned int id, int age)
    :ChineseFactory(type,name,id,age){
    c_id = id;
    c_name = name;
    c_age = age;
    c_type = type;

}

