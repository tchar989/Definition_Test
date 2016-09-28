#include "deftest.h"
#include "deftest.cc"
#include <Vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main()
{
	deftest *x = new deftest();
	x->loadDef();
	return 0;
}