// Zadacha2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	//Задача 2 от лева към евро Да се напише програма която коивертира въведена от потребителя стойност ВЛВ.
	//	И отпечатва резултата в евро,

	double leva;
	scanf_s("%lf", &leva);
	double euro = leva * 0.51;
	printf("euro = %.2f", euro);
}


