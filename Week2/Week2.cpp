#include <iostream>
#include <cmath>

int main()
{
	///*
	//Задача 1: Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.
	//Вход : 1, Изход : Monday
	//Вход : 5, Изход : Friday
	//Вход : 250, Изход : Invalid day!
	//*/

	//int n;
	//std::cout << "Enter a whole number: ";
	//std::cin >> n;

	//switch (n)
	//{
	//case 1: std::cout << "Monday" << std::endl; break;
	//case 2: std::cout << "Tuesday" << std::endl; break;
	//case 3: std::cout << "Wednesday" << std::endl; break;
	//case 4: std::cout << "Thursday" << std::endl; break;
	//case 5: std::cout << "Friday" << std::endl; break; 
	//case 6: std::cout << "Saturday" << std::endl; break;
	//case 7: std::cout << "Sunday" << std::endl; break;
	//default: std::cout << "Invalid day" << std::endl; break;
	//}

	///*
	//Задача 2 (Between 100 and 200) : Да се напише програма, която въвежда цяло число и проверява дали е под 100, между 100 и 200 или над 200. Да се отпечатат съответно съобщения като в 
	//примерите по - долу :
	//Вход : 95, Изход : Less than 100
	//Вход : 120, Изход : Between 100 and 200
	//Вход : 250, Изход : Greater than 200
	//*/

	//int num;
	//std::cout << "Enter a number: ";
	//std::cin >> num;

	//if (num < 100)
	//{
	//	std::cout << "Less than 100" << std::endl;
	//} 
	//else if (num > 100 && num < 200)
	//{
	//	std::cout << "Between 100 and 200" << std::endl;
	//}
	//else
	//{
	//	std::cout << "Greater than 200" << std::endl;
	//}

	///*
	//Задача 3 (Speed trap) : Да се напише програма, която въвежда скорост(десетично число) и отпечатва информация за скоростта.При скорост до 10 (включително)отпечатайте “slow”.При скорост 
	//над 10 и до 50 отпечатайте “average”.При скорост над 50 и до 150 отпечатайте “fast”.При скорост над 150 и до 1000 отпечатайте “ultra fast”.При по - висока скорост отпечатайте “extremely
	//fast”
	//Вход : 8, Изход : slow
	//Вход : 49.5, Изход : average
	//Вход : 126, Изход : fast
	//Вход : 3500, Изход : extremely fast
	//*/

	//int number;
	//std::cout << "Enter a number: ";
	//std::cin >> number;

	//if (number < 10)
	//{
	//	std::cout << "slow" << std::endl;
	//}
	//else if (number >= 10 && number <= 50)
	//{
	//	std::cout << "average" << std::endl;
	//}
	//else if (number >= 50 && number <= 150)
	//{
	//	std::cout << "fast" << std::endl;
	//}
	//else if (number > 150 && number < 1000)
	//{
	//	std::cout << "ultra fast" << std::endl;
	//}
	//else
	//{
	//	std::cout << "extremely fast" << std::endl;
	//}

	///*
	//Задача 4 (Лице на фигура) : Да се напише програма, която въвежда размерите на геометрична фигура и пресмята лицето й.Фигурите са четири вида : квадрат(s), правоъгълник(r), кръг(c) и 
	//триъгълник(triangle).На първия ред на входа се чете вида на фигурата(square, rectangle, circle или triangle).Ако фигурата е квадрат, на следващия ред се чете едно число – дължина на 
	//страната му.Ако фигурата е правоъгълник, на следващите два реда четат две числа – дължините на страните му.Ако фигурата е кръг, на следващия ред чете едно число – радиусът на кръга.Ако 
	//фигурата е триъгълник, на следващите два реда четат две числа – дължината на страната му и дължината на височината към нея.Резултатът да се закръгли до 3 цифри след десетичната точка
	//Вход : s 5, Изход : 25
	//Вход : r 7 2.5, Изход : 17.5
	//Вход : c 6, Изход : 113.097
	//*/

	//char figure;
	//double result;
	//std::cout << "Enter type of figure: ";
	//std::cin >> figure;

	//if (figure == 's')
	//{
	//	double a;
	//	std::cout << "Enter a number: ";
	//	std::cin >> a;
	//	result = a * a;
	//}
	//else if (figure == 'r')
	//{
	//	double x, y;
	//	std::cout << "Enter a first number: ";
	//	std::cin >> x;
	//	std::cout << "Enter a second number: ";
	//	std::cin >> y;
	//	result = x * y;
	//}
	//else if (figure == 'c')
	//{
	//	double radius, pi = 3.14;
	//	std::cout << "Enter a radius: ";
	//	std::cin >> radius;
	//	result = radius * radius * pi;
	//}
	//else if (figure == 't')
	//{
	//	double b, c;
	//	std::cout << "Enter a number: ";
	//	std::cin >> b;
	//	std::cout << "Enter height of triangle: ";
	//	std::cin >> c;
	//	result = (b * c) / 2;
	//}

	//std::cout << result << std::endl;

	///*
	//Задача 5 (Време + 15 минути) : Да се напише програма, която въвежда час и минути от 24 - часово денонощие и изчислява колко ще е часът след 15 минути.Резултатът да се
	//отпечата във формат hh : mm.Часовете винаги са между 0 и 23, а минутите винаги са между 0 и 59. Часовете и минутите се изписват винаги с по две цифри, с водеща нула
	//когато е необходимо
	//Вход : 1 46, Изход : 02 : 01
	//Вход : 0 1, Изход : 00 : 16
	//Вход : 23 59, Изход : 00 : 14
	//*/

	//int hours, minutes;
	//std::cout << "Enter hours: ";
	//std::cin >> hours;
	//std::cout << "Enter minutes: ";
	//std::cin >> minutes;

	//if (hours < 0 || minutes < 0 
	//	|| hours > 23 || minutes > 59)
	//{
	//	std::cout << "Error" << std::endl;
	//}

	//minutes += 15;

	//if (minutes > 59)
	//{
	//	hours++;
	//	minutes -= 60;
	//}

	//if (hours > 23)
	//{
	//	std::cout << "00";
	//}
	//else
	//{
	//	if (hours < 10)
	//	{
	//		std::cout << "0";
	//	}
	//	std::cout << hours;
	//}

	//std::cout << ":";

	//if (minutes < 10)
	//{
	//	std::cout << "0";
	//}

	//std::cout << minutes << std::endl;

	///*
	//Задача 6 : Ще казваме, че поредица от числа е трион, ако всяко число в нея е едновременно поголямо или равно от двата си съседа или пък едновременно по - малко или 
	//равно от тях.За първия и последния елемент имаме само по един съсед.Напишете програма, която въвежда от стандартния 5 на брой цели числа.Да се изведе на стандартния 
	//изход "yes", ако въведената поредица е трион, или "no", в противен случай.
	//Вход : 1 5 1 0 3, Изход : no
	//Вход : -10 10 - 2 11 - 22, Изход : yes
	//*/

	//int num1, num2, num3, num4, num5;
	//std::cout << "Enter first number: ";
	//std::cin >> num1;
	//std::cout << "Enter second number: ";
	//std::cin >> num2;
	//std::cout << "Enter third number: ";
	//std::cin >> num3;
	//std::cout << "Enter forth number: ";
	//std::cin >> num4;
	//std::cout << "Enter fifth number: ";
	//std::cin >> num5;

	//if ((num2 >= num1 && num2 >= num3 || num2 <= num1 && num2 <= num3)
	//	&& (num3 >= num2 && num3 >= num4 || num3 <= num2 && num3 <= num4)
	//	&& (num4 >= num3 && num4 >= num5 || num4 <= num3 && num4 <= num5))
	//{
	//	std::cout << "Yes" << std::endl;
	//}
	//else
	//{
	//	std::cout << "No" << std::endl;
	//}

	///*
	//Задача 7 : Да се напише програма, която при подадени радиус r и двумерна точка(х, у) проверява дали точката се намира вътре / извън или по контура на окръжност с център
	//(0, 0).
	//Вход : 5 0 5, Изход : On the circle
	//Вход : 5 10 30, Изход : Out of the circle
	//Вход : 5 0 2, Изход : In the circle
	//*/

	double radius;
	int x, y;
	std::cout << "Enter radius: ";
	std::cin >> radius;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter y: ";
	std::cin >> y;

	double distance = sqrt(x * x + y * y);

	if (distance == radius)
	{
		std::cout << "The point (" << x << "," << y << ") is on the circle!" << std::endl;
	}
	else if (distance > radius)
	{
		std::cout << "The point (" << x << "," << y << ") is outside the circle!" << std::endl;
	}
	else
	{
		std::cout << "The point (" << x << "," << y << ") is inside the circle!" << std::endl;
	}

	return 0;
}