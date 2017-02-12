#include "TestdPointConstructor.h"

using namespace std;

// Test the empty constructor.
void TestdPointConstructor::Test0()
{
  TEST_THROWS_NOTHING(dPoint P1);
};

// Test a valid case.
void TestdPointConstructor::Test1()
{
  vector<double> v(1, 1.);
  TEST_THROWS_NOTHING(dPoint P1(1, v));
};

// Testing index types:
// Test a double for the index.
void TestdPointConstructor::Test2()
{
  vector<double> v(1, 1.);
  double index = 2.3;
  TEST_THROWS_MSG(dPoint P(index, v), double, "Error: The index must be an integer not a double.");
};

// Testing index values:
// 0
void TestdPointConstructor::Test4()
{
  vector<double> v(1, 1.);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// 2
void TestdPointConstructor::Test5()
{
  vector<double> v(1, 1.);
  TEST_THROWS_NOTHING(dPoint P1(2, v));
};

// 42
void TestdPointConstructor::Test6()
{
  vector<double> v(1, 1.);
  TEST_THROWS_NOTHING(dPoint P1(42, v));
};

// -1
void TestdPointConstructor::Test7()
{
  vector<double> v(1, 1.);
  TEST_THROWS_MSG(dPoint P1(-1, v), int, "Error: The index cannot be negative.");
};

// Testing coordinate types:
// Test int.
void TestdPointConstructor::Test8()
{
  vector<double> v(1, 1.);
  dPoint P(0, v);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
  TEST_ASSERT(P.getcoords() == v);
};

// Testing coordinate sizes:
// empty.
void TestdPointConstructor::Test10()
{
  vector<double> v;
  TEST_THROWS_MSG(dPoint P1(0, v), double, "Error: the coordinates cannot be empty.");
};

// d=1, v=2.
void TestdPointConstructor::Test11()
{
  vector<double> v(1, 2.);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// d=2, v=(0,0)
void TestdPointConstructor::Test12()
{
  vector<double> v(2, 0.0);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// d=2, v=(10, 23)
void TestdPointConstructor::Test13()
{
  vector<double> v;
  v.push_back(10);
  v.push_back(23);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// d=2, v=(0.1, 0.01)
void TestdPointConstructor::Test14()
{
  double a[] = {0.1, 0.01};
  vector<double> v(a, a+2);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// d=2, v=(-1, -7)
void TestdPointConstructor::Test15()
{
  double a[] = {-1, -0.7};
  vector<double> v(a, a+2);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};

// d=10, v=(1,...,1)
void TestdPointConstructor::Test16()
{
  vector<double> v(10, 1.);
  TEST_THROWS_NOTHING(dPoint P1(0, v));
};
