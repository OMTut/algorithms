#ifndef TEST_H
#define TEST_H

#include <string>

using namespace std;

class Test {
   public:
      void assertEqual(bool condition, const string& testName);
};

#endif // TEST_H