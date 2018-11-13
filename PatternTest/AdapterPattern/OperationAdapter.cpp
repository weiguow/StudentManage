//
// Created by weiguow on 18-10-25.
//
#include <iostream>
#include <array>
#include <assert.h>

#include <OperationAdapter.h>
#include <BinarySearch.h>
#include <QuickSort.h>

OperationAdapter::OperationAdapter() {
     sortObj = QuickSort();
     searchObj = BinarySearch();
}

int OperationAdapter::Search(vector<int> &vec, int &pos, int &value) {
    return searchObj.binarysearch(vec,pos,value);
}

void OperationAdapter::Sort(vector<int> &vec, int low, int high) {
    return sortObj.quicksort(vec,low,high);
}

