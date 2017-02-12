#include "cpptest.h"
#include "TestsdPoint/TestdPointConstructor.h"
#include "TestsdPoint/TestdPointDistance.h"

int main(){
  Test::Suite ts;
  ts.add(std::auto_ptr<Test::Suite>(new TestdPointConstructor));
  ts.add(std::auto_ptr<Test::Suite>(new TestdPointDistance));
  Test::TextOutput output(Test::TextOutput::Verbose);
  return ts.run(output);
};
