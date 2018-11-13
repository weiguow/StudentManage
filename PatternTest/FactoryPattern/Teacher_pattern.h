//
// Created by weiguow on 18-10-24.
//

#ifndef STUDENTSMANAGE_TEACHER_PATTERN_H
#define STUDENTSMANAGE_TEACHER_PATTERN_H

#include <iostream>
#include <string>
#include <memory>
#include <vector>

#include <ChineseFactory.h>

using std::vector;
using std::string;
using std::shared_ptr;

class Teacher_pattern : public ChineseFactory {

private:
    vector<string> m_subjects;
public:
    explicit Teacher_pattern(shared_ptr<string> type, shared_ptr<string> name, unsigned int id,
                             int age, vector<string> subjects);
};

#endif //STUDENTSMANAGE_TEACHER_PATTERN_H
