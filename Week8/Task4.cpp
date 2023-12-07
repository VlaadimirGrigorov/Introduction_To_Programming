#include <iostream>

int encoded(int n, int k)
{
    unsigned mask = 1; // default
    mask <<= k; // shoft k positions to the left 
    mask -= 1; // we need to substract 1 because it's already on position 1

    return n & mask;
}

int main()
{
    /*
    Задача 4: Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в 
    последните k бита на n.
    Вход : 15 2, Изход : 3
    Вход : 189 3, Изход : 5
    Вход : 189 4, Изход : 13
    */
    
    int n, k;
    std::cin >> n >> k;
    std::cout << encoded(n, k) << std::endl;

    return 0;
}