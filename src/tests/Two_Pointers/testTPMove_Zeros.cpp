#include "testTPMove_Zeros.h"
#include "../../algorithms/Two_Pointers/TPMove_Zeros.h"
#include <string>
#include <iostream>

using namespace std;

// assert equals
void assertEquals(vector<int>& expectedData, TPMove_Zeros test, const std::string& testName) {
    if (test.getData() == expectedData) {
        std::cout << "[PASS] " << testName << std::endl;
    } else {
        std::cout << "[FAIL] " << testName << std::endl;
    }
}

// Test em
void testTPMove_Zeros() {
    vector<int> data1 = {1,0,2,0,0,7};
    vector<int> expectedData = {1,2,7,0,0,0};

    TPMove_Zeros test1(data1);
    test1.move_zeros();
    assertEquals(expectedData, test1, "TP Move Zeros: Test Case 1");

    vector<int> data2 = {-1, -2, 0, 2, -2, 0};
    expectedData = {-1, -2, 2, -2, 0, 0};
    TPMove_Zeros test2(data2);
    test2.move_zeros();
    assertEquals(expectedData, test2, "TP Move Zeros: Test Case 2");

    vector<int> data3 = {0};
    expectedData = {0};
    TPMove_Zeros test3(data3);
    assertEquals(expectedData, test3, "TP Move Zeros: Test Case 3");

    // Prompt user to contine
   cout << "Press C to continue..." << endl;
   char userChoice;
   do {
      cin >> userChoice;
   } while (userChoice != 'C' && userChoice != 'c');
    
}