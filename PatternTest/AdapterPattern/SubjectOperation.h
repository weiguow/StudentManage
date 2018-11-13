//
// Created by weiguow on 18-10-25.
//

#ifndef STUDENTSMANAGE_SUBJECT_H
#define STUDENTSMANAGE_SUBJECT_H

#include <string.h>
#include <memory>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using std::vector;
using std::string;
using std::shared_ptr;

class SubjectOperation {

protected:
    int s_id;
    float s_point;
    string s_name;

public:
    int Search(vector<int> &invec, int &pos, int &value);

    void Sort(vector<int> &vec, int low, int high);

};

#endif //STUDENTSMANAGE_SUBJECT_H
