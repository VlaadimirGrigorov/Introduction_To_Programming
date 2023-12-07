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
    ������ 4: �������� �������, ����� �� �������� ���� ����� n � ���� ����� k � ����� �������, ����� � "����������" � 
    ���������� k ���� �� n.
    ���� : 15 2, ����� : 3
    ���� : 189 3, ����� : 5
    ���� : 189 4, ����� : 13
    */
    
    int n, k;
    std::cin >> n >> k;
    std::cout << encoded(n, k) << std::endl;

    return 0;
}