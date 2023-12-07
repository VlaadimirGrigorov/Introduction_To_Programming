#include <iostream>

unsigned countOnes(unsigned binary)
{
    unsigned count = 0;
    unsigned mask = 1;
    while (binary) // binary != 0
    {
        if ((binary & mask) != 0) // check
            count++; // increment counter
        binary >>= 1; // right shift by one so we can compare mask
    }

    return count;
}

int main()
{
    /*
    Задача 2: Напишете функция, която приема цяло число и връща броя на 1 - ците в двоичния му запис.
    Вход : 189, Изход : 6
    */

    unsigned num;
    std::cin >> num;
    std::cout << countOnes(num) << std::endl;
    
    return 0;
}