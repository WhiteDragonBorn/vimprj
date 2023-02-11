#include <string>
#include <cstring>
#include <iostream>

using std::string;
using std::cin;
using std::cout;

struct parts
{
	int quant;
	double qual;
	char * smth;

};

union onef
{
	int q;
	double e;
	bool r;
};

char * getname();