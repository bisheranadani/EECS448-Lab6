#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "string.h"
#include "LinkedListOfInts.h"
using namespace std;

class Test{
  public:
    Test();
    ~Test();
    void myTest();
    void Test21();
    void Test22();
    void Test23();
    void Test3();
    void Test4();
    void Test5();
    void Test6();
    void Test7();

  private:
    string passed;
    string failed;
    string temp;
};
#endif
