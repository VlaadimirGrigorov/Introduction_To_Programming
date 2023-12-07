#include <iostream>

bool isSubset(int n, int k)
{
    // ���������� �������� ���� �� n
    while (n > 0 && (n & 1) == 0) {
        n >>= 1;
    }

    // ���������� k � ������� ����� ��� ����� ���� ������ ���� n
    int kLength = 0;
    int tempK = k;
    while (tempK > 0) {
        tempK >>= 1;
        kLength++;
    }

    int mask = (1 << kLength) - 1; // ��������� ����� ��� ����� ���� ������ ���� k, ������ �� 1

    // ����������� ���� k � ���� �� n
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
    ������ 5: �������� �������, ����� ������ ���� ����� n � ���� ����� k � ����� ���� k � ������� �����(������������ �� 
    ��� �������� 0 - ��) � ���� �� �������� ����� �� n.
    ���� : 15 3, ����� : true
    ���� : 13 5 ����� : true
    ���� : 13 7, ����� : false
    */

    int n, k;
    std::cin >> n >> k;
    std::cout << std::boolalpha << isSubset(n, k) << std::endl;

    return 0;
}