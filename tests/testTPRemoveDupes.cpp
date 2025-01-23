#include "testTPRemoveDupes.h"
#include "../algorithms/Two_Pointers/TPRemove_Dupes.h"
#include <vector>
#include <iostream>

// assert equals
void assertEqual(bool condition, const std::string& testName) {
    if (condition) {
        std::cout << "[PASS] " << testName << std::endl;
    } else {
        std::cout << "[FAIL] " << testName << std::endl;
    }
}

void testTPRemoveDupes() {
    std::vector<int> arr = {0, 10, 0, 1, 0, 2};
    int expected1 = 3;

    std::vector<int> arr2 = {1, 2, 3, 4};
    int expected2 = 4;

    std::vector<int> arr3 = {0};
    int expected3 = 1;

    // Create instances of the algorithm
    TPRemove_Dupes algo1(arr);
    TPRemove_Dupes algo2(arr2);
    TPRemove_Dupes algo3(arr3);

    // Execute the algorithm and get results
    int result1 = algo1.removeDupes();
    int result2 = algo2.removeDupes();
    int result3 = algo3.removeDupes();

    // Assert results
    //cout << algo1.getName() << endl;
    assertEqual(result1 == expected1, "TP Remove Dupes: Test Case 1");
    assertEqual(result2 == expected2, "TP Remove Dupes: Test Case 2");
    assertEqual(result3 == expected3, "TP Remove Dupes: Test Case 3");
}