#include <iostream>
#include <cmath>

int main()
{ 
	// GCD
	// <15, 9> -> 15 % 9 = 6
	// <9, 6> -> 9 % 6 == 3
	// <6, 3> -> 6 % 3 == 0
	// <3, 0> -> If we have 0 on the right side then 3 is our number (on left side)

	int a, b;
	std::cout << "Enter two numbers: ";
	std::cin >> a >> b;

	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	while (b != 0)
	{
		int newB = a % b;
		a = b;
		b = newB;
	}

	std::cout << "Result: " << a << std::endl;

	return 0;
}