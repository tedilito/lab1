// Zadacha6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	/* задача: 3оомагазин Напишете програма, която пресмята нужните разходи за закупуването на храна за кучета и котки.
	Храната се пазарува от зоомагазин, като една опаковка храна за кучета е на цена 2.50 лв, а опаковка храна за котки струва 4 лв.*/

	const float cenaKucheshkaHrana = 2.50;
	const int cenaKoteshkaHrana = 4;

	int broiKucheshkaHrana;
	int broiKoteshakHrana;

	printf("Vuvedete broq na kucheshkata hrana, koqto shte zakupite: \n");
	scanf_s("%d" , &broiKucheshkaHrana);
	printf("Vuvedete broq na koteshkaa hrana, koqto shte zakupite: \n");
	scanf_s("%d", &broiKoteshakHrana);

	double totalCena = (broiKoteshakHrana * cenaKoteshkaHrana) + (broiKucheshkaHrana * cenaKucheshkaHrana);

	printf("Razhodi: %.2f \n", totalCena);
	printf("Cenata na hrana za kucheta e: %.2f \n", (broiKucheshkaHrana * cenaKucheshkaHrana));
	printf("Cenata na hrana za kotki e: %.2f \n", (broiKoteshakHrana * cenaKoteshkaHrana * 1.0));


}

