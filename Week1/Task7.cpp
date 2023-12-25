#include <iostream>

int main()
{
	int m;
	std::cout << "Enter a whole number in leva: ";
	std::cin >> m;

	int d1 = m / 100;
	m %= 100;
	int d2 = m / 50;
	m %= 50;
	int d3 = m / 20;
	m %= 20;
	int d4 = m / 5;
	m %= 5;
	int d5 = m / 2;
	m %= 2;
	int d6 = m / 1;
	m %= 1;

	std::cout << d1 << "x" << 100 << "lv " << d2 << "x" << 50 << "lv " << d3 << "x" << 20 << "lv " << d4 << "x" << 5 << "lv " << d5 << "x" << 2 << "lv " << d6 << "x" << 1 << "lv " << std::endl;
}