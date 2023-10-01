#include <iostream>

int *link_taker(int *arr, int Size)
{
    int g;
    std::cin >> g;
    for (int i = g; i < Size; i++)
    {
        arr[i] = 0;
    }
    return 0;
}

int main()
{
    int nSize;
    std::cin >> nSize;

    int *arrN = new int[nSize];

    for (int i = 0; i < 10; i++)
    {
        arrN[i] = i;
    }

    link_taker(arrN, nSize);

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrN[i] << std::endl;
    }
}
