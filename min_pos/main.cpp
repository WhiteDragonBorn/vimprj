#include <iostream>
#include <Windows.h>
#include <functional>

using std::cin;
using std::cout;

// Программа должна создавать массив указанного размера со случайными числами в заданном диапазоне
// и найти в нем индекс первого минимального и максимального элементов.

int *mem_alloc(const int);
void free_mem(int *&);
void print_arr(int *, int *);
void print_arr(int *, const int);
void fill(int *, const int, int, int);
int *find_min_or_max(int *, const int, 
                    std::function<bool(int, int)>);

int main()
{
    setlocale(LC_ALL, "Russian");

    unsigned int size;

    cout << "Размер массива: ";
    cin >> size;
    cout << std::endl;

    int *m_arr = mem_alloc(size);

    // for (size_t i = 0; i < size; i++)
    // {
    //     // *(m_arr + i) = i;
    //     cout << (m_arr + i) << " ";
    // }

    fill(m_arr, size, 10, 20);

    // cout << std::endl
    //      << m_arr + size << std::endl;

    print_arr(m_arr, size);

    // print_arr(m_arr, size);

    int m_arr_min = find_min_or_max(m_arr, size, [](int x, int y)
                                    { return x < y; }) -
                    m_arr;

    int m_arr_max = find_min_or_max(m_arr, size, [](int x, int y)
                                    { return x > y; }) -
                    m_arr;
    cout << "Min: " << m_arr_min << "  " << "Max: " << m_arr_max << std::endl;

    free_mem(m_arr);
    system("pause");
}


int *mem_alloc(const int size)
{
    return new int[size];
}

void free_mem(int *&arr)
{
    delete[] arr;
}

// begin = arr, end = arr + size
void print_arr(int *begin, int *end)
{
    // end = arr + size
    for (int *ptr = begin; ptr < end; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout<<std::endl;
}

// another version of print_arr
void print_arr(int *arr, const int size)
{
    for (int *ptr = arr; ptr < arr + size; ++ptr)
    {
        cout << *ptr << " ";
    }
    cout<<std::endl;
}

// fill with numbers in [A, B]
void fill(int *arr, const int size, int A, int B)
{
    srand(GetTickCount());
    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = A + rand() % (B - A + 1);
    }
}

// "<" to find min, ">" to find max
int *find_min_or_max(int *arr, const int size, std::function<bool(int, int)> compare)
{
    int *result = arr;
    for (int *ptr = result + 1; ptr < arr + size; ++ptr)
    {
        if (compare(*ptr, *result))
        {
            result = ptr;
        }
    }
    return result;
}
