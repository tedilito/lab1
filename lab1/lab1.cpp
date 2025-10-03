// lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Задача І от инчове към сантиметри Да се напише програма, която чете от конзолата число(не непременно цяло) 
	//	и преобразува числото от инчове в сантиметри
	//	.а целта умножава инчовстс по 2.54 (защото инч = 2.54 сантиметра).


    double inches;
	scanf_s("%lf", &inches);
	double centimeters = inches * 2.54;
	printf("centimeters = %.2f", centimeters);

	




}


