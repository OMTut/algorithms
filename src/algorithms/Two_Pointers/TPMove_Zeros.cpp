/*******************************************************************************
Given an array of integers, move all the 0s to the back of the array while 
maintaining the relative order of the non-zero elements. Do this in-place using
constant auxiliary space.

Input:  [1, 0, 2, 0, 0, 7]
Output: [1, 2, 7, 0, 0, 0]
 *****************************************************************************/
#include "TPMove_Zeros.h"
#include <iostream>
using namespace std;

// construct the object
TPMove_Zeros::TPMove_Zeros(const vector<int>& data) : data(data) {}

int TPMove_Zeros::getDataSize() {
    return size;
}

vector<int> TPMove_Zeros::getData() {
    return data;
}

void TPMove_Zeros::move_zeros() {
    int slow = 0;
    for (int fast = 0; fast < int(data.size()); fast++) {
        if (data[fast] != 0) {
            int numSlow = data[slow];
            data[slow] = data[fast];
            data[fast] = numSlow;
            slow++;
        }
    }
}

void TPMove_Zeros::printData() {
    for (int num : data) {
        cout << num << " ";
    }
}
