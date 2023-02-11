#include "header.h"
#include <iostream>

using std::cin;
using std::cout;


char * getname(){
	char temp[80];
	cout << "enter";
	cin >> temp;
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);
	return pn;
}
