#include "cpptest.h"
#include "tests/TestdPointConstructor.h"
#include "tests/TestdPointDistance.h"

int main(){
  Test::Suite ts;
  ts.add(std::auto_ptr<Test::Suite>(new TestdPointConstructor));
  ts.add(std::auto_ptr<Test::Suite>(new TestdPointDistance));
  Test::TextOutput output(Test::TextOutput::Verbose);
  return ts.run(output);
};
