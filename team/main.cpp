#include <iostream>
#include <ctime>

using namespace std;



struct info
{
    int math;
    int cosc;
    int phys;
};

void msort_math(info*&, const int);

int main()
{
    srand(time(NULL));
    info* studs = new info[10];

    for (int i = 0; i < 10; i++)
    {
        studs[i].math = rand() % 100;
        studs[i].cosc = rand() % 100;
        studs[i].phys = rand() % 100;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << studs[i].math << " "; 
        cout << studs[i].cosc<< " ";
        cout << studs[i].phys<< " ";
        cout << endl;
    }
    msort_math(studs, 10);
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << studs[i].math << " "; 
        cout << studs[i].cosc<< " ";
        cout << studs[i].phys<< " ";
        cout << endl;
    }
}

void msort_math(info*& arr , const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if( arr[j].math < arr[j+1].math )
            {
                std::swap(arr[j], arr[j+1]);
            }
        }
        
    }
}