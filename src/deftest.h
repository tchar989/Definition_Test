#include <iostream>
#include <vector>
#ifndef DEFTEST_H
#define DEFTEST_H
using namespace std;
class deftest{
 public:
  class def
  {
   public:
    string definition;
    string name;
    def(string newDef, string newName)
    {
      definition = newDef;
      name = newName;
    }
  };
  vector<def> defs;
  void loadDef();
  void addDef(string newDef, string newName);
  void test();
};
#endif