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

    for (int i = 0; i < nSize; i++)
    {
        arrayN[i] = i + 5;
    }

    int oSize = 0;

    for (int i = 0; i < mSize; i++)
    {
        int r = 0;
        for (int j = 0; j < nSize; j++)
        {
            if (arrayM[i] == arrayN[j])
            {
                r++;
                break;
            }
        }
        if (r == 0)
        {
            oSize++;
        }
    }

    int g=0;

    for (int j = nSize - 1; j >= 0; j--)
    {
        int r = 0;
        for (int i = 0; i < nSize; i++)
        {
            if (arrayN[j] == arrayM[i])
            {
                r++;
            }
        }
        if (r == 0)
        {
            oSize++;
            g++;
        }
    }


    int *arrayO = new int[oSize];

    for (int i = 0; i < mSize; i++)
    {
        int r = 0;
        for (int j = 0; j < nSize; j++)
        {
            if (arrayM[i] == arrayN[j])
            {
                r++;
                break;
            }
        }
        if (r == 0)
        {
            arrayO[i] = arrayM[i];
        }
    }

    for (int j = nSize - 1; j >= 0; j--)
    {
        int r = 0;
        for (int i = 0; i < nSize; i++)
        {
            if (arrayN[j] == arrayM[i])
            {
                r++;
            }
        }
        if (r == 0)
        {
            arrayO[g] = arrayN[j];
            g++;
        }
    }

    for (int i = 0; i < oSize; i++)
    {
        std::cout << arrayO[i] << std::endl;
    }
}
