#include "cpptest.h"
#include "dPoint.h"
#include <vector>
#include <iostream>
#ifndef TESTDPOINTCONSTRUCTOR_H
#define TESTDPOINTCONSTRUCTOR_H

class TestdPointConstructor : public Test::Suite{
  public:
    TestdPointConstructor(){
      TEST_ADD(TestdPointConstructor::Test0);
      TEST_ADD(TestdPointConstructor::Test1);
      //TEST_ADD(TestdPointConstructor::Test2);
      //TEST_ADD(TestdPointConstructor::Test3);
      TEST_ADD(TestdPointConstructor::Test4);
      TEST_ADD(TestdPointConstructor::Test5);
      TEST_ADD(TestdPointConstructor::Test6);
      TEST_ADD(TestdPointConstructor::Test7);
      TEST_ADD(TestdPointConstructor::Test8);
      //TEST_ADD(TestdPointConstructor::Test9);
      //TEST_ADD(TestdPointConstructor::Test10);
      TEST_ADD(TestdPointConstructor::Test11);
      TEST_ADD(TestdPointConstructor::Test12);
      TEST_ADD(TestdPointConstructor::Test13);
      TEST_ADD(TestdPointConstructor::Test14);
      TEST_ADD(TestdPointConstructor::Test15);
      TEST_ADD(TestdPointConstructor::Test16);
    }
  private:
    void Test0();
    void Test1();
    void Test2();
    //void Test3();
    void Test4();
    void Test5();
    void Test6();
    void Test7();
    void Test8();
    //void Test9();
    void Test10();
    void Test11();
    void Test12();
    void Test13();
    void Test14();
    void Test15();
    void Test16();
};

#endif
