#include <iostream>

int put_array(int putArray)
{
    std:: cin >> putArray;
    return putArray;
}

int main()
{
    int arrN[15];

    for (int i = 0; i < 10; i++)
    {
        arrN[i] = 0;
    }

    int put;

    for (int i = put_array (put); i < 10; i++)
    {
        arrN [i] = i;
    }
    
    for (int i = 0; i < 10; i++)
    {
        std:: cout << arrN [i] << std:: endl;
    }
}