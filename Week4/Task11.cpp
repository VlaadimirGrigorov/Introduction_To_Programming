#include <iostream>
#include <cmath>

char lowerToUpper(char symbol)
{
	if (symbol >= 'a' && symbol <= 'z')
	{
		symbol -= 32;
	}

	return symbol;
}

int main()
{
	//Задача 11: Напишете функция, която приема символ и връща съответната главна буква(ако подадения символ е малък символ)
	//Вход : 'а', Изход : 'А'
	//Вход : '!', Изход : '!' //или грешка

	char symbol1;
	std::cin >> symbol1;

	std::cout << lowerToUpper(symbol1);

	return 0;
}