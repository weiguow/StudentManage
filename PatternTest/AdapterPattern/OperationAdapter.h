//
// Created by weiguow on 18-10-25.
//

#ifndef STUDENTSMANAGE_OPERATIONADAPTER_H
#define STUDENTSMANAGE_OPERATIONADAPTER_H

#include <iostream>
#include <array>

#include <SubjectOperation.h>
#include <QuickSort.h>
#include <BinarySearch.h>

class OperationAdapter:public SubjectOperation{
private:
    QuickSort sortObj;
    BinarySearch searchObj;

public:
    OperationAdapter();

    int Search(vector<int> &vec, int &pos, int &value);

    void Sort(vector<int> &vec, int low, int high);

};
#endif //STUDENTSMANAGE_OPERATIONADAPTER_H
