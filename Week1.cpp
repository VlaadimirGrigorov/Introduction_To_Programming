//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	// ������ 1: ������� �� ���� �����.����������� 1, ��� ������� � ����� � 0, ��� � �������.
//	// ���� : 265, ����� : 0
//	// ���� : 290, ����� : 1
//
//	int num;
//	std::cout << "Enter a whole number: ";
//	std::cin >> num;
//
//	bool isEven = num % 2;
//	if (isEven)
//	{
//		std::cout << "1" << std::endl; // std::cout << isEven << std::endl;
//	}
//	else
//	{
//		std::cout << "0" << std::endl; // std::cout << isEven << std::endl;
//	}
//
//	/*
//	������ 2: ������� �� ���������� ���� ����� n.�� �� �������� ���������� ����� ������� � �������.
//	���� : 265, ����� : 563
//	���� : 289, ����� : 983
//	*/
//
//	int number;
//	std::cout << "Enter three digit number: ";
//	std::cin >> number;
//
//	int firstDigit = number / 100;
//	int secondDigit = (number / 10) % 10;
//	int thirdDigit = number % 10;
//
//	int newNumber = thirdDigit * 100 + secondDigit * 10 + firstDigit + 1;
//	std::cout << newNumber << std::endl;
//
//	/*
//	������ 3: ������ �� ������.�� �� �������� 1, ��� � ��������� ������ �����, � 0, ��� �� �.
//	���� : �, ����� : 1
//	���� : �, ����� : 1
//	���� : �, ����� : 0
//	*/
//
//	char symbol;
//	std::cout << "Enter a symbol: ";
//	std::cin >> symbol;
//
//	if (symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U')
//	{
//		std::cout << "1" << std::endl;
//	}
//	else
//	{
//		std::cout << "0" << std::endl;
//	}
//
//	/*
//	������ 4: ������ �� ���� �����.�� �� �������� 1, ��� ������� � ������� ������ �� �������, � 0, ��� �� � �������.
//	���� : 5, ����� : 1
//	���� : 3, ����� : 1
//	���� : 9, ����� : 0
//	*/
//
//	int var;
//	std::cout << "Enter a whole number: ";
//	std::cin >> var;
//
//	if (var >= 2 && var <= 6)
//	{
//		std::cout << "1" << std::endl;
//	}
//	else
//	{
//		std::cout << "0" << std::endl;
//	}
//
//	/*
//	������ 5: ������ �� ���� �����.�� �� �������� ��� ���������� �����.
//	���� : 513, ����� : 51
//	���� : 1234, ����� : 123
//	*/
//
//	int n;
//	std::cout << "Enter a whole number: ";
//	std::cin >> n;
//
//	std::cout << "New number without last digit is: " << n / 10 << std::endl;
//
//	/*
//	������ 6: �������� ��������, ����� ������� ��� ����� - a � b � ������� ���� ��������(a + b) ^ 4 - (a - b) ^ 2
//	���� : 5 7, ����� : 20732
//	*/
//
//	int a, b;
//	std::cout << "Enter first number: ";
//	std::cin >> a;
//	std::cout << "Enter second number: ";
//	std::cin >> b;
//
//	int result = pow((a + b), 4) - pow((a - b), 2);
//	std::cout << result << std::endl;
//
//	/*
//	������ 7: ������� �� ���� ����� n - n ����.�� �� ������ �� ��������� ��� ���� �� �� ����������� �� ��������, ���� �� �� ����� ��������� ���� ��������.� ��������� ��������, �� ����� 
//	�������� �� 1 � 2 ����.
//	*/
//
//	int m;
//	std::cout << "Enter a whole number in leva: ";
//	std::cin >> m;
//
//	int d1 = m / 100;
//	m %= 100;
//	int d2 = m / 50;
//	m %= 50;
//	int d3 = m / 20;
//	m %= 20;
//	int d4 = m / 5;
//	m %= 5;
//	int d5 = m / 2;
//	m %= 2;
//	int d6 = m / 1;
//	m %= 1;
//
//	std::cout << d1 << "x" << 100 << "lv " << d2 << "x" << 50 << "lv " << d3 << "x" << 20 << "lv " << d4 << "x" << 5 << "lv " << d5 << "x" << 2 << "lv " << d6 << "x" << 1 << "lv " << std::endl;
//
//	/*
//	������ 8: �������� �� ��� �����.�� �� �������� �� - �������� �� �����.
//	���� : 265, 44, ����� : 265
//	*/
//
//	int x, y;
//	std::cout << "Enter first number: ";
//	std::cin >> x;
//	std::cout << "Enter second number: ";
//	std::cin >> y;
//
//	if (x > y)
//	{
//		std::cout << x << std::endl;
//	}
//	else
//	{
//		std::cout << y << std::endl;
//	}
//
//}