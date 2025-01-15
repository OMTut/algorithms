#include "test_TPRemove_Dupes.h"
#include "../Test.h" // base test class
#include "../../algorithms/Two_Pointers/TPRemove_Dupes.h" //algorithm
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void testTPRemoveDupes() {
   vector<int> arr = {0, 0, 1, 1, 1, 2, 2};
   int expected1 = 3;

   vector<int> arr2 = {1,2,3,4};
   int expected2 = 4;
   
   vector<int> arr3 = {0};
   int expected3 = 1;

   // Create instances of the TPRemove_Dupes algorithm
   TPRemove_Dupes algo1(arr);
   TPRemove_Dupes algo2(arr2);
   TPRemove_Dupes algo3(arr3);

   // Run the instances and get the result. Returns an int.
   int result1 = algo1.removeDupes();
   int result2 = algo2.removeDupes();
   int result3 = algo3.removeDupes();

   // Compare the results
   Test test;
   test.assertEqual(result1 == expected1, "TP Remove Dupes: Test 1");
   test.assertEqual(result2 == expected2, "TP Remove Dupes: Test 2");
   test.assertEqual(result3 == expected3, "TP Remove Dupes: Test 3");

   // Prompt user to contine
   cout << "Press C to continue..." << endl;
   char userChoice;
   do {
      cin >> userChoice;
   } while (userChoice != 'C' && userChoice != 'c');
}