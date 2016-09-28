 #include "deftest.h"
#include <Vector>
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

void deftest::addDef(string newDef, string newName)
{
	defs.push_back(*(new def(newDef,newName)));
	return;
}
void deftest::loadDef()
{
	string path;
	cout << "Enter the path to your definition text file." << endl;
	cin >> path;
	fstream *f = new fstream();
	if(path == "" || path.length() <= 4)
	{
		cerr << "invalid file name" << endl;
		exit(1);
	}
	if(path.at(path.length()-4) != '.' || path.at(path.length()-3) != 't' 
		||path.at(path.length()-2) != 'x' || path.at(path.length()-1) != 't')
	{
		cerr << "not a text file. exiting..." << endl;
		exit(1);
		//eventually, give user more chances to input pathname
	}
	char get;
	string gotName;
	string gotDef;
	f->open(path);
	f->get(get);
	while(!f->eof())
	{
	while(get != ':')
	{
		gotName += get;
		f->get(get);
	}
	cout << gotName << endl;
	while(!f->eof())
	{
		if(get == '\n' && f->get() == '\n')
		{
			break;
		}
		f->unget();
		gotDef += get;
		f->get(get);
	}
	cout << gotDef << endl;
	}
}
/*void deftest::test()
{
	string name;
	string def;
	cout << "Welcome to the definition tester. To quit at any time, enter <QUIT>." << endl;
	int randInd = 0;
	while(strcmp)
	{
		randInd = rand()  
	}*/


