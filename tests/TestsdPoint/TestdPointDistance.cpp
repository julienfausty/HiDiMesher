#include "TestdPointDistance.h"

void TestdPointDistance :: TestEmpty(){
  dPoint P1;
  dPoint P2;
  dPoint *aP2 = &P2;
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT(dist == 0.);
};

void TestdPointDistance :: TestSelf(){
  std::vector<double> v(2,1.);
  dPoint P1(1, v);
  TEST_THROWS_NOTHING(P1.calcdistance(P1));
  double dist = P1.calcdistance(P1);
  TEST_ASSERT(dist == 0.);
};

void TestdPointDistance :: TestEqual(){
  std::vector<double> v(2, 1.);
  dPoint P1(1, v);
  dPoint P2(2, v);
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT(dist == 0.);
};

void TestdPointDistance :: TestDim1(){
  std::vector<double> v(1, 1.);
  dPoint P1(1, v);
  std::vector<double> u(1, 0.);
  dPoint P2(2, u);
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT(dist == 1.);
};

void TestdPointDistance :: TestDim2(){
  std::vector<double> v(2, 1.);
  dPoint P1(1, v);
  std::vector<double> u(1, 1.);
  u.push_back(0.5);
  dPoint P2(2, u);
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT(dist == 0.5);
};

void TestdPointDistance :: TestDim3(){
  std::vector<double> v(3, 0.);
  dPoint P1(1, v);
  std::vector<double> u(2, 0.);
  u.push_back(2.5);
  dPoint P2(2, u);
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT(dist == 2.5);
};

void TestdPointDistance :: TestDimMore(){
  std::vector<double> v(7, 0.);
  dPoint P1(1, v);
  std::vector<double> u(6, 0.);
  u.push_back(1.7);
  dPoint P2(2, u);
  TEST_THROWS_NOTHING(P1.calcdistance(P2));
  double dist = P1.calcdistance(P2);
  TEST_ASSERT_DELTA(dist, 1.7, 0.0001);
};
