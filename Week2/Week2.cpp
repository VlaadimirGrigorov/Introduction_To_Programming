#include <iostream>
#include <cmath>

int main()
{
	///*
	//������ 1: �� �� ������ ��������, ����� ������� ���� ����� ���������� � ���� ��� ��� �� ��������� �.
	//���� : 1, ����� : Monday
	//���� : 5, ����� : Friday
	//���� : 250, ����� : Invalid day!
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
	//������ 2 (Between 100 and 200) : �� �� ������ ��������, ����� ������� ���� ����� � ��������� ���� � ��� 100, ����� 100 � 200 ��� ��� 200. �� �� ��������� ��������� ��������� ���� � 
	//��������� �� - ���� :
	//���� : 95, ����� : Less than 100
	//���� : 120, ����� : Between 100 and 200
	//���� : 250, ����� : Greater than 200
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
	//������ 3 (Speed trap) : �� �� ������ ��������, ����� ������� �������(��������� �����) � ��������� ���������� �� ���������.��� ������� �� 10 (�����������)����������� �slow�.��� ������� 
	//��� 10 � �� 50 ����������� �average�.��� ������� ��� 50 � �� 150 ����������� �fast�.��� ������� ��� 150 � �� 1000 ����������� �ultra fast�.��� �� - ������ ������� ����������� �extremely
	//fast�
	//���� : 8, ����� : slow
	//���� : 49.5, ����� : average
	//���� : 126, ����� : fast
	//���� : 3500, ����� : extremely fast
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
	//������ 4 (���� �� ������) : �� �� ������ ��������, ����� ������� ��������� �� ����������� ������ � �������� ������ �.�������� �� ������ ���� : �������(s), ������������(r), ����(c) � 
	//����������(triangle).�� ������ ��� �� ����� �� ���� ���� �� ��������(square, rectangle, circle ��� triangle).��� �������� � �������, �� ��������� ��� �� ���� ���� ����� � ������� �� 
	//�������� ��.��� �������� � ������������, �� ���������� ��� ���� ����� ��� ����� � ��������� �� �������� ��.��� �������� � ����, �� ��������� ��� ���� ���� ����� � �������� �� �����.��� 
	//�������� � ����������, �� ���������� ��� ���� ����� ��� ����� � ��������� �� �������� �� � ��������� �� ���������� ��� ���.���������� �� �� �������� �� 3 ����� ���� ����������� �����
	//���� : s 5, ����� : 25
	//���� : r 7 2.5, ����� : 17.5
	//���� : c 6, ����� : 113.097
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
	//������ 5 (����� + 15 ������) : �� �� ������ ��������, ����� ������� ��� � ������ �� 24 - ������ ��������� � ��������� ����� �� � ����� ���� 15 ������.���������� �� ��
	//�������� ��� ������ hh : mm.�������� ������ �� ����� 0 � 23, � �������� ������ �� ����� 0 � 59. �������� � �������� �� �������� ������ � �� ��� �����, � ������ ����
	//������ � ����������
	//���� : 1 46, ����� : 02 : 01
	//���� : 0 1, ����� : 00 : 16
	//���� : 23 59, ����� : 00 : 14
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
	//������ 6 : �� �������, �� �������� �� ����� � �����, ��� ����� ����� � ��� � ������������ �������� ��� ����� �� ����� �� ������ ��� ��� ������������ �� - ����� ��� 
	//����� �� ���.�� ������ � ��������� ������� ����� ���� �� ���� �����.�������� ��������, ����� ������� �� ����������� 5 �� ���� ���� �����.�� �� ������ �� ����������� 
	//����� "yes", ��� ���������� �������� � �����, ��� "no", � �������� ������.
	//���� : 1 5 1 0 3, ����� : no
	//���� : -10 10 - 2 11 - 22, ����� : yes
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
	//������ 7 : �� �� ������ ��������, ����� ��� �������� ������ r � �������� �����(�, �) ��������� ���� ������� �� ������ ����� / ����� ��� �� ������� �� ��������� � ������
	//(0, 0).
	//���� : 5 0 5, ����� : On the circle
	//���� : 5 10 30, ����� : Out of the circle
	//���� : 5 0 2, ����� : In the circle
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