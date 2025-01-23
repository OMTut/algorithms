#include "testTPMove_Zeros.h"
#include "../../algorithms/Two_Pointers/TPMove_Zeros.h"
#include <string>
#include <iostream>

using namespace std;

// assert equals
void assertEquals(vector<int>& expectedData, TPMove_Zeros test, const std::string& testName) {
    if (test.getData() == expectedData) {
        std::cout << "[PASS] " << testName << std::endl;
        //cout << "Expected data: " << data1.p << " DataSize: " << int(data1.size());
    } else {
        std::cout << "[FAIL] " << testName << std::endl;
        //cout << "Expected Size: " << expectedSize << " DataSize: " << int(data1.size());
    }
}

// Test em
void testTPMove_Zeros() {
    vector<int> data1 = {1,0,2,0,0,7};
    vector<int> expectedData = {1,2,7,0,0,0};

    TPMove_Zeros test1(data1);
    test1.move_zeros();
    test1.printData();
    assertEquals(expectedData, test1, "TP Move Zeros: Test Case 1");

    // Prompt user to contine
   cout << "Press C to continue..." << endl;
   char userChoice;
   do {
      cin >> userChoice;
   } while (userChoice != 'C' && userChoice != 'c');
    
}