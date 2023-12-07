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
    ������ 2: �������� �������, ����� ������ ���� ����� � ����� ���� �� 1 - ���� � �������� �� �����.
    ���� : 189, ����� : 6
    */

    unsigned num;
    std::cin >> num;
    std::cout << countOnes(num) << std::endl;
    
    return 0;
}