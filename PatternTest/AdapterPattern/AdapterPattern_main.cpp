//
// Created by weiguow on 18-10-25.
//
#include <iostream>
#include <array>
#include <cstring>

#include <OperationAdapter.h>
#include <BinarySearch.h>
#include <QuickSort.h>
#include <algorithm>

using std::cout;
using std::endl;
using std::sort;

int main() {
    OperationAdapter operationAdapter;
    vector<int> SubjectID{1234,1345,1456,1818,1567};
    int len = SubjectID.size();
    int value = 1567;

    int pos = operationAdapter.Search(SubjectID,len,value);
    cout << "the position of the value id: "<<pos<<endl;

    operationAdapter.Sort(SubjectID,0,len-1);
    for(int i= 0;i<len;i++){
        cout<<SubjectID[i]<<endl;
    }
}

