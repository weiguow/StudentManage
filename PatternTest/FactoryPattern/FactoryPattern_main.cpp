//
// Created by weiguow on 18-10-24.
//
#include <iostream>
#include <string>
#include <memory>

#include <ChineseFactory.h>
#include <Teacher_pattern.h>
#include <Student_pattern.h>

using std::shared_ptr;
using std::string;
using std::endl;
using std::cout;

int main(){
    shared_ptr<string> c_name (new string("weiguo"));
    shared_ptr<string> c_type (new string("Teacher"));
    unsigned int c_id = 1;
    int c_age = 23;

    ChineseFactory weiguo(c_type,c_name,c_id,c_age);
    cout << weiguo << endl;

    if(*c_type == "Student"){
        Student_pattern weiguo(c_type,c_name,c_id,c_age);
        cout << weiguo <<endl;
    }
    else{
        shared_ptr<string> c_type_1 (new string("Teacher"));
        vector<string> t_subjects;
        t_subjects.push_back("Math");
        t_subjects.push_back("Chemistry");
        Teacher_pattern weiguo_1(c_type_1,c_name,c_id,c_age,t_subjects);
        cout << weiguo_1 <<endl;
    }
    return 0;
}


