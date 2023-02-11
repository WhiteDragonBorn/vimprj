#include <iostream>
#include <string>
#include "header.h"


using namespace std;

struct info
{
    string name;
    unsigned int dia;
    double weight;
    
};

// 216
int main()
{
    info * Pin = new info;    
    cin >> Pin->name >> Pin->dia >> Pin->weight;

    cout << Pin->name << Pin->dia << Pin->weight; 
    delete Pin;
}



