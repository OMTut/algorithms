/*******************************************************************************
 * Given a sorted list of numbers, remove duplicates and return the new length. 
 * You must do this in-place and without using extra memory.
Input: [0, 0, 1, 1, 1, 2, 2].
Output: 3.

Your function should modify the list in place so that the first three elements 
become 0, 1, 2. Return 3 because the new length is 3.
 *****************************************************************************/
#include "TPRemove_Dupes.h"

//Constructor
TPRemove_Dupes::TPRemove_Dupes(const vector<int>& data) : data(data) {}

// remove duplicates
int TPRemove_Dupes::removeDupes() {
    if (data.empty()) return 0;
    int slow = 0;
    for (int fast = 1; fast < data.size(); fast++) {
        if (data[fast] != data[slow]) {
            slow++;
            data[slow] = data[fast];
        }
    }
    return slow + 1;
}