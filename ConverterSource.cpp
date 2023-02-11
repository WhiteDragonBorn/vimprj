#include <iostream>
#include <string>
#include "header.h"

using namespace std;

struct inf{
	int a;
	double b;
};

int main()
{
	char * name;
	name = getname();
	cout << name ;
	delete[] name;
}