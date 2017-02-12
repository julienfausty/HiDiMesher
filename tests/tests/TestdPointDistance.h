#include "cpptest.h"
#include "dPoint.h"
#include <vector>
#include <iostream>
#ifndef TESTDPOINTDISTANCE_H
#define TESTDPOINTDISTANCE_H

class TestdPointDistance : public Test::Suite{
  public:
    TestdPointDistance(){
      TEST_ADD(TestdPointDistance::TestEmpty);
      TEST_ADD(TestdPointDistance::TestSelf);
      TEST_ADD(TestdPointDistance::TestEqual);
      TEST_ADD(TestdPointDistance::TestDim1);
      TEST_ADD(TestdPointDistance::TestDim2);
      TEST_ADD(TestdPointDistance::TestDim3);
      TEST_ADD(TestdPointDistance::TestDimMore);
    };
  private:
    void TestEmpty();
    void TestSelf();
    void TestEqual();
    void TestDim1();
    void TestDim2();
    void TestDim3();
    void TestDimMore();
};

#endif
