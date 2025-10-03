// zadacha5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
	//Задача 5 изчисляване на изрази
	//double stoinost;

	//а) x = 0.5;
	//const double x = 0.5;
	//stoinost = sqrt(pow(x, 2) - 6 * x + 9);
	//printf("Stoinosta na izrazut e: %.1f", stoinost);

	//b) b = 7; 
	/*const int b = 7;
	stoinost = (sqrt(b) - sqrt(5)) * (sqrt(b) + sqrt(5));
	printf("Stoinosta na izrazut e: %.0f", stoinost);*/

	//Напишете програмни редове, с които да пресмятате следните изрази:
	double yResult;
	//а)
	/*double a;
	double b;

	printf("Vuvedete stoinost za a: \n");
	scanf_s("%lf", &a);
	printf("Vuvedete stoinost za b: \n");
	scanf_s("%lf", &b);

	yResult = sqrt((2 * a - b) / (a + b)) - sqrt(pow(a, 2) - pow(b, 2));
	printf("Stoinosta na izrazut e: %lf", yResult);*/

	//b)
	/*double x;
	double y;

	printf("Vuvedete stoinost za x: \n");
	scanf_s("%lf", &x);
	printf("Vuvete stoinost za y: \n");
	scanf_s("%lf", &y);

	yResult = sqrt((2 * x) / (y + 9)) + sqrt((x - y) / 2 * x);
	printf("Stoinosta na izrazut e: %lf", yResult);*/

	//v)
	/*double x;
	double k;

	printf("Vuvedete stoinost za x: \n");
	scanf_s("%lf", &x);
	printf("Vuvedete stoinost za k: \n");
	scanf_s("%lf", &k);

	yResult = (x - k) / (4 * x * k) + 1 / (2 * k);
	printf("Stoinosta na izrazut e: %lf", yResult);*/

	//g)
	//double a;
	//double b;

	//printf("Vuvedete stoinost za a: \n");
	//scanf_s("%lf", &a);
	//printf("Vuvedete stoinost za b: \n");
	//scanf_s("%lf", &b);

	//yResult = a / (pow(a, 2) + pow(b, 2)) + b + (2 * a);
	//printf("Stoinosta na izrazut e: %.lf", yResult);

	//Задача Променливата y зависи от променливата x. Зависимоста е следната....
	// Да се напише програма, която по дадено x намира съответната стойност на y

	double x;
	printf("Vuvedete stoinost za x: \n");
	scanf_s("%lf", &x);
	if (x >= 1)
	{
		yResult = log10(x) + 1.82;
	}
	else
	{
		yResult = pow(x, 2) + 7 * x + 8.82;
	}

	printf("Stoinosta na y e: %lf", yResult);




}

