#include <iostream>
#include <cmath>

// First task

void inputArr(int arr[], size_t size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}

int uniqueElement(int arr[], size_t size)
{
    int result = 0;

    for (int i = 0; i < size; i++)
    {
        result ^= arr[i];
    }

    return result;
}

int main()
{
    /*
    Задача 1: Да се напише функция, която приема масив, в който всяко число се среща 2 пъти с изключение на едно число, което 
    се среща веднъж.Напишете функция, която приема такъв масив и връща кое е това число. (Подсказка : използвайте побитови 
    операции, за да постигнете линейно решение)
    Вход : [9 18 9 12 18 15 12] , Изход : 15
    */

    constexpr int size = 50;
    int arr[size];
    size_t length;
    std::cin >> length;
    inputArr(arr, length);
    std::cout << uniqueElement(arr, length) << std::endl;

    return 0;
}