#include "Test.h"
#include <string>
#include <iostream>

using namespace std;

void Test::assertEqual(bool condition, const string& testName) {
   if (condition) {
      cout << "[PASS] " << testName << endl;
   } else {
      cout << "[FAIL] " << testName << endl;
   }
}