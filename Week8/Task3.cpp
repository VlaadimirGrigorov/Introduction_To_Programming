#include <iostream>

unsigned makeBitZero(unsigned int n, unsigned int ind) //clear bit
{
    unsigned int mask = 1;
    mask <<= ind;

    mask = ~mask;

    return n & mask;
}

int getRightmostPosition(unsigned num)
{
    unsigned m = 1;
    unsigned pos = 0;

    while ((num & m) == 0)
    {
        m <<= 1;
        pos++;
    }

    return pos;
}

unsigned getNewNumber(unsigned num)
{
    int pos = getRightmostPosition(num);
    return makeBitZero(num, pos);
}

int main()
{
    /*
    Задача 3 : Напишете функция, която приема цяло число и обръща най - десния бит в него, който е единица.
    Вход : 12, Изход : 8
    Вход : 15, Изход : 14
    */
    
    unsigned num;
    std::cin >> num;
    std::cout << getNewNumber(num) << std::endl;

    return 0;
}