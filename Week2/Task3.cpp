#include <iostream>
#include <cmath>

int main()
{
	/*
	������ 3 (Speed trap) : �� �� ������ ��������, ����� ������� �������(��������� �����) � ��������� ���������� �� ���������.��� ������� �� 10 (�����������)����������� �slow�.��� ������� 
	��� 10 � �� 50 ����������� �average�.��� ������� ��� 50 � �� 150 ����������� �fast�.��� ������� ��� 150 � �� 1000 ����������� �ultra fast�.��� �� - ������ ������� ����������� �extremely
	fast�
	���� : 8, ����� : slow
	���� : 49.5, ����� : average
	���� : 126, ����� : fast
	���� : 3500, ����� : extremely fast
	*/

	int number;
	std::cout << "Enter a number: ";
	std::cin >> number;

	if (number < 10)
	{
		std::cout << "slow" << std::endl;
	}
	else if (number >= 10 && number <= 50)
	{
		std::cout << "average" << std::endl;
	}
	else if (number >= 50 && number <= 150)
	{
		std::cout << "fast" << std::endl;
	}
	else if (number > 150 && number < 1000)
	{
		std::cout << "ultra fast" << std::endl;
	}
	else
	{
		std::cout << "extremely fast" << std::endl;
	}

	return 0;
}