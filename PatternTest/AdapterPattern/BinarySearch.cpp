//
// Created by weiguow on 18-10-25.
//
#include <iostream>
#include <array>
#include <assert.h>


#include <BinarySearch.h>

int BinarySearch::binarysearch(vector<int> &invec, int &pos, int &value){
    int low = 0, high = pos-1;
    assert(!invec.empty() && pos>=0);
    while(low <=high){
         int mid = (low+high)/2;
         if(invec[mid] == value){
            return mid;
        }
         else if(invec[mid] < value){
            low = mid+1;
             }
            else{
            high = mid-1;
            }
    }
    return -1;
}

