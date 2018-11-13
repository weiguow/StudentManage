//
// Created by weiguow on 18-10-24.
//

#ifndef STUDENTSMANAGE_STUDENT_PATTERN_H
#define STUDENTSMANAGE_STUDENT_PATTERN_H


#include <iostream>
#include <string>
#include <memory>

#include <ChineseFactory.h>

using std::string;
using std::shared_ptr;

class Student_pattern : public ChineseFactory {
public:
    explicit Student_pattern(shared_ptr<string> type, shared_ptr<string> name, unsigned int id,
                             int age);
};

#endif //STUDENTSMANAGE_STUDENT_PATTERN_H