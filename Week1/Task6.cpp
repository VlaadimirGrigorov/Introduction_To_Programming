#include <iostream>
#include <cmath>

int main()
{
	int a, b;
	std::cout << "Enter first number: ";
	std::cin >> a;
	std::cout << "Enter second number: ";
	std::cin >> b;

	int result = pow((a + b), 4) - pow((a - b), 2);
	std::cout << result << std::endl;
}