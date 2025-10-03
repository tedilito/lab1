// zadacha3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	/*Zадача З Периметър Да сс напише програма,
		която намира периметъра и лицсто на правоъгълник със страни 2, 3 и3, 7 */
	
	/*double stranaA = 2.3;
	double stranaB = 3.7;

	double lice = stranaA * stranaB;

	printf("Lice = %lf", lice);*/


	//Да се модифицира програмния код и стойностите за страните да се въвеждат от потребителя
	double stranaA;
	double stranaB;

	printf("Vuvedi strana A i strana B: \n");
	scanf_s("%lf", &stranaA);
	scanf_s("%lf", &stranaB);

	double lice = stranaA * stranaB;
	
	printf("Lice = %.1f", lice);




}

