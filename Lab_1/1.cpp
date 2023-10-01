#include <iostream>

int main()
{
    int mSize, nSize;
    std::cin >> mSize;
    std::cin >> nSize;

    int *arrayM = new int[mSize];
    int *arrayN = new int[nSize];

    for (int i = 0; i < mSize; i++)
    {
        arrayM[i] = i;
    }
    for (int i = 0; i < mSize; i++)
    {
        arrayN[i] = i + 3;
    }

    int oSize = 0;

    for (int j = 0; j < mSize; j++)
    {
        for (int i = 0; i < nSize; i++)
        {
            if (arrayM[j] == arrayN[i])
            {
                oSize++;
                break;
            }
        }
    }

    int *arrayO = new int[oSize];

    int k = 0;

    for (int j = 0; j < mSize; j++)
    {
        for (int i = 0; i < nSize; i++)
        {
            if (arrayM[j] == arrayN[i])
            {
                arrayO[k] = arrayM[j];
                k++;
            }
        }
    }

    for (int i = 0; i < oSize; i++)
    {
        std::cout << arrayO[i] << std:: endl;
        
    }

    return 0;
}