//
// Created by weiguow on 18-10-26.
//

#include <iostream>
#include <vector>

#include <QuickSort.h>

using std::vector;


void QuickSort::quicksort(vector<int> &vec, int low, int high)//必须传引用,否则出错,因为vector是一个类对象
{
    if (low < high)
    {
        int l = low;
        int r = high;
        int key = vec[l];//记录key值

        while (l < r)
        {
            while (l < r&&key <= vec[r])//从右往左遍历,找到第一个小于key的元素
                --r;
            vec[l] = vec[r];
            while (l < r&&key >= vec[l])//从左往右遍历,找到第一个大于key值的元素
                ++l;
            vec[r] = vec[l];
        }
        vec[l] = key;//其实此时l=r
        quicksort(vec, low, l-1);
        quicksort(vec, r + 1, high);
    }
}