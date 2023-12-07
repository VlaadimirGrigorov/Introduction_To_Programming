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
    ������ 1: �� �� ������ �������, ����� ������ �����, � ����� ����� ����� �� ����� 2 ���� � ���������� �� ���� �����, ����� 
    �� ����� ������.�������� �������, ����� ������ ����� ����� � ����� ��� � ���� �����. (��������� : ����������� �������� 
    ��������, �� �� ���������� ������� �������)
    ���� : [9 18 9 12 18 15 12] , ����� : 15
    */

    constexpr int size = 50;
    int arr[size];
    size_t length;
    std::cin >> length;
    inputArr(arr, length);
    std::cout << uniqueElement(arr, length) << std::endl;

    return 0;
}