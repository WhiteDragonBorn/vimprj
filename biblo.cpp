#include <iostream>
#include <string>
#include <vector>
#include <cstring>


using std::cin;
using std::cout;
using std::string;
using std::vector;

void pb(int *, int&, string);

void tokenize(std::string const &str, const char delim,
            std::vector<std::string> &out)
{
    // construct a stream from the string
    std::stringstream ss(str);
 
    std::string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(s);
    }
}

int main()
{
    
    int arrsize = 200;
    char words[200] = "std :: new = * ** void { } ( ) & % # ! enum print find _ set main int double float unsigned fill array arr ptr size [] free system delete endl const for int i ; ++ if define the return int const enum void include to for struct of else is in endif this case enum unsigned bool 0x and false break true char std NULL nullptr static be it data string size value extern uint34_t not that public class enum The type file name This or with ifdef namespace typedef result new we on base are enum end from by virtual defined param long index set ifndef double using while fuction template at vector list default out count cnt target enum private all number buffer only sizeof key flag lenght first info block item object item switch string continue table should brief which push_back begin address delete has ret current event other must source val start bit pos map socket device memory boost stl";
    // char *arrptr = new char[arrsize];
    // vector<string> arr;

    string wrd = "";

    for ( char x : words) 
    {
        cout << x;
        string str;
        str += x;
        cout << arr.size();
        // strcmp(x, " ")
        if( str != " ")
        {
            wrd+=x;
        }
        else
        {
            arr.push_back(wrd);
            wrd = "";
        }

    }
    cout << "abaa";
    for ( string str : arr )
    {
        cout << str << std::endl;
    }
     





    // cout << *arrptr+0 << *arrptr+1;
}

// void pb(int *arr, int &size, string elem)
// {
    
// }
