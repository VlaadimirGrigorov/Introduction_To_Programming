#include <iostream>
#include <cmath>

bool isUppercase(char symbol)
{
	return symbol >= 'A' && symbol <= 'Z';
}

int main()
{
	//Задача 10: Напишете функция, която приема символ и дали символа е главна буква.
	//Вход : 'А', Изход : true
	//Вход : '!', Изход : false //или грешка

	char symbol;
	std::cin >> symbol;

	std::cout << std::boolalpha << isUppercase(symbol) << std::endl;

	return 0;
}