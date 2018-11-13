//
// Created by weiguow on 18-10-24.
//
#include <iostream>
#include <memory>
#include <string>

#include <Teacher_pattern.h>

using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;

Teacher_pattern::Teacher_pattern(shared_ptr<string> type,shared_ptr<string> name,
        unsigned int id,int age,vector<string> subjects) :ChineseFactory(type,name,id,age),m_subjects(subjects){
    cout<<"Teacher construct" <<endl;
    c_name = name;
    c_age = age;
    c_id = id;
    c_type = type;
    int count = m_subjects.size();
    for(int i=0;i<count;i++){
        cout << m_subjects[i] << endl;
    }
}

