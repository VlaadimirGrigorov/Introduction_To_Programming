//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	// Задача 1: Въвежда се цяло число.Отпечатайте 1, ако числото е четно и 0, ако е нечетно.
//	// Вход : 265, Изход : 0
//	// Вход : 290, Изход : 1
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
//	Задача 2: Въвежда се трицифрено цяло число n.Да се отпечата обърнатото число събрано с единица.
//	Вход : 265, Изход : 563
//	Вход : 289, Изход : 983
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
//	Задача 3: Въвежа се символ.Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.
//	Вход : а, Изход : 1
//	Вход : Е, Изход : 1
//	Вход : В, Изход : 0
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
//	Задача 4: Въвежа се цяло число.Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.
//	Вход : 5, Изход : 1
//	Вход : 3, Изход : 1
//	Вход : 9, Изход : 0
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
//	Задача 5: Въвежа се цяло число.Да се отпечата без последната цифра.
//	Вход : 513, Изход : 51
//	Вход : 1234, Изход : 123
//	*/
//
//	int n;
//	std::cout << "Enter a whole number: ";
//	std::cin >> n;
//
//	std::cout << "New number without last digit is: " << n / 10 << std::endl;
//
//	/*
//	Задача 6: Напишете програма, която въвежда две числа - a и b и извежда като резултат(a + b) ^ 4 - (a - b) ^ 2
//	Вход : 5 7, Изход : 20732
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
//	Задача 7: Въвежда се цяло число n - n лева.Да се изведе на конзолата как може да се разпределят по банкноти, така че да имаме минимален брой банкноти.В условието приемаме, че имаме 
//	банкноти от 1 и 2 лева.
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
//	Задача 8: Въвеждат се две числа.Да се отпечата по - голямото от двете.
//	Вход : 265, 44, Изход : 265
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