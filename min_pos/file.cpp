#include <iostream>
#include <Windows.h>
#include <functional>
#include <fstream>

using namespace std;
// void print(int a[]);
// void print(int a[5]); // осторожно с мемори аксесс если передавать по ссылке
// // лучшпе передавать с int size аргументом
// // const int *a --- защита данных от изменения
// void print(int*a);

void print1(int* arr, const int  size)
{
    for (int* ptr = arr; ptr < arr+size; ++ptr)
    {
        
        cout << *ptr;
    }
    
}
void print2(int* begin, int* end)
{
    // end = arr + size
    for (int* ptr = begin; ptr != end; ++ptr)
    {
        
        cout << *ptr;
    }
    
}

int * memory_allocation( const int size)
{
    return new int[size];
}

// void memory_allocation2( int* &arr , const int size)
// {
//     arr = new int[size];
// }

void free_memory( int* &arr )
{
    delete[] arr;
}

void fill( int * arr, int size, int A, int B)
{
    srand(GetTickCount());
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = A + rand() % (B - A) ;
    }
}

void fill(int * arr, int size, std::istream& stream = std::cin)
{
    for (size_t i = 0; i < size; i++)
    {
        stream >> arr[i];
    }
    
}
void print( const char * message , const int * arr, const int size, std::ostream& stream = std::cout)
{
    stream << message;
    for (size_t i = 0; i < size; i++)
    {
        stream << arr[i];
    }
    
}

int min_pos( int * arr, int size)
{
    int result = 0;
    for (size_t i = 0; i < size; i++)
    {
        if(arr[i] < arr[result])
        {
            result = 1;

        }
    }
    return result;
    
}

int * min_pos2(int * arr, int size)
{
    int * result = arr; // &arr[0]
    for (int* ptr = arr+1; ptr < arr+size; ++ptr)
    {
        if(*ptr < *result)
        {
            result = ptr;
        }
    }
    return result;
}
int * min_pos3(int*begin, int *end, std::function<bool(int,int)> compare)
{
    int * result = begin; // &arr[0]
    for (int* ptr = begin; ptr < end; ++ptr)
    {
        if(compare(*ptr, *result))
        {
            result = ptr;
        }
    }
    return result;
}
int main()
{
    // // статические массивы
    // // const int size = 3;
    // // int arr1[size] = {1, 2, 3};
    // int arrr[] = {1,2,2,3};
    // int count = sizeof (arrr )/ sizeof (int);

    // for (size_t i = 0; i < count; i++)
    // {
    //     cout << arrr[i] ;
    // }
    
    // // Only static mass, good for <vector> and <list>
    // for( int x: arrr)
    // {
    //     cout << x;
    // }
    // // на будущее
    // for( auto &x: arrr)
    // {
    //     cout << x;
    // }

    // int arr[10] = {};
    // cout << arr;
    // int *ptr = arr1;
    // int *ptrr = &arr1[0];

    // print1(arr+2, 2);
    // // print2(arr, arr+size);

    // динамические
    int size;
    std::cin >> size;

    int * arr = memory_allocation(size);
    fill(arr, size, -10, 10);
    std::cout << min_pos3(arr, arr+size, [](int x, int y) {return x < y;}) - arr;
















}
/* Хранилища информации, контейнеры, коллекции










*/