#include <iostream>

bool isSubset(int n, int k)
{
    // Премахваме водещите нули от n
    while (n > 0 && (n & 1) == 0) {
        n >>= 1;
    }

    // Превръщаме k в двоично число със същия брой битове като n
    int kLength = 0;
    int tempK = k;
    while (tempK > 0) {
        tempK >>= 1;
        kLength++;
    }

    int mask = (1 << kLength) - 1; // Създаваме маска със същия брой битове като k, всички на 1

    // Проверяваме дали k е част от n
    while (n > 0) {
        if ((n & mask) == k) {
            return true;
        }
        n >>= 1;
    }

    return false;
}

int main()
{
    /*
    Задача 5: Напишете функция, която приема цяло число n и цяло число k и връща дали k в двоичен запис(разглеждайки го 
    без водещите 0 - ли) е част от двоичния запис на n.
    Вход : 15 3, Изход : true
    Вход : 13 5 Изход : true
    Вход : 13 7, Изход : false
    */

    int n, k;
    std::cin >> n >> k;
    std::cout << std::boolalpha << isSubset(n, k) << std::endl;

    return 0;
}