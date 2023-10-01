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
        // arrayM[i] = i;
        std::cin >> arrayM[i];
    }

    for (int i = 0; i < nSize; i++)
    {
        // arrayN[i] = i + 3;
        std::cin >> arrayN[i];
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


    // std::cout << "Osize: " << oSize << "\n";
    int *arrayO = new int[oSize];
    int k = 0;

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
            arrayO[k++] = arrayM[i];
        }
    }

    for (int i = 0; i < oSize; i++)
    {
        std::cout << arrayO[i] << std::endl;
    }
}
