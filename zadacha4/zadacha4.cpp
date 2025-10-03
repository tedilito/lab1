// zadacha4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h> 
#include <stdio.h> // otogvaq za printf i scanf_s
#include "zadacha4.h"

const double PI = 3.14159265358979323846;

int main()
{
	/*Задача 4.
	Да се напише програма която да пресмята лицата на фигурите:*/

	int izbor;
	double parametar1;
	double rezultat;

	printf("Izberete figura, kato vuvedete suotventata cifra na figurata za da izchislite liceto i, vuzmojnite izbori sa: \n");
	printf("\n1.Obem na kulbo\n2.Duljina na okrujnost\n3.Lice na krug\n4.Lice na pravougulnik\n5.Lice na kvadrat\n6.Lice na triugulnik\n7.Lice na trapec\n8.Lice na usporednik\n9.Lice na pravilen mnogougulnik\n10.Izhod");
	printText();
	scanf_s("%d", &izbor);

	while (izbor != 10)
	{


		switch (izbor)
		{
		case 1: // obem na kulbo
		{
			printf("Vuvedete radius na kulboto: \n");
			readParam(parametar1);
			//parametur1 = radius

			rezultat = (4 * PI * pow(parametar1, 3)) / 3;
			printf("obem na kulbo %lf", rezultat);

			break;
		}
		case 2: // duljina na okrujnost
		{
			printf("Vuvedete radius na okrujnost: \n");
			readParam(parametar1);
			//parametur1 = radius

			rezultat = 2 * PI * parametar1;
			printf("duljina na okrujnost %lf", rezultat);
			break;
		}

		case 3: // lice na krug
		{
			printf("Vuvedete radius na okrujnost: \n");
			readParam(parametar1);
			//parametur1 = radius

			rezultat = PI * pow(parametar1, 2);
			printf("Liceto na krugut e: %lf", rezultat);
			break;
		}
		case 4: // lice na pravougulnik
		{
			printf("Vuvedete duljina a na pravougulnik: \n");
			readParam(parametar1);
			//parametur1 = a
			double parametar_duljina_b;

			printf("Vuvedete duljina b na pravougulnik: \n");
			readParam(parametar_duljina_b);

			rezultat = parametar1 * parametar_duljina_b;
			printf("Liceto na pravougulnik e: %.1f", rezultat);
			break;
		}
		case 5: // lice na kvadrat
		{
			printf("Vuvedete duljina a na kvadrata: \n");
			readParam(parametar1);
			//parametur1 = a

			rezultat = pow(parametar1, 2);
			printf("Liceto na kvadrata e: %.1f", rezultat);
			break;
		}
		case 6: // lice na triugulnik
		{
			printf("Vuvedete duljina a na triugulnik: \n");
			readParam(parametar1);
			//parametur1 = a
			double parametar_visochina_triugulnik;

			printf("Vuvedete visochina na triugulnik: \n");
			readParam(parametar_visochina_triugulnik);

			rezultat = (parametar1 * parametar_visochina_triugulnik) / 2;
			printf("Liceto na triugulnik e: %.1f", rezultat);
			break;
		}
		case 7: // lice na trapec
		{
			printf("Vuvedete duljina a na trapec: \n");
			readParam(parametar1);
			//parametur1 = a

			double parametar_duljina_b_trapec;
			printf("Vuvedete duljina b na trapec: \n");
			readParam(parametar_duljina_b_trapec);

			double parametar_visochina;
			printf("Vuvedete visochina na trapec: \n");
			readParam(parametar_visochina);

			rezultat = ((parametar1 + parametar_duljina_b_trapec) / 2) * parametar_visochina;
			printf("Liceto na trapec e: %.1f", rezultat);
			break;

		}
		case 8: // lice na usporednik
		{
			printf("Vuvedete duljina a na usporednik: \n");
			readParam(parametar1);
			//parametur1 = a

			double parametar_visochina;
			printf("Vuvedete visochina na usporednik: \n");
			readParam(parametar_visochina);

			rezultat = parametar1 * parametar_visochina;
			printf("Liceto na usporednik e: %.1f", rezultat);
			break;

		}
		case 9: // lice na pravilen mnogougulnik
		{
			printf("Vuvedete apotemata na pravilniq mnogougulnik \n");
			readParam(parametar1);
			//parametar1 = apotemata

			printf("Vuvedete duljinata na stranata b \n");
			double duljinaNaStranataB;
			readParam(duljinaNaStranataB);

			printf("Vuvedete broqt na stranite na mnogougulnika \n");
			double broiStraniNaMnogougulnika;
			readParam(broiStraniNaMnogougulnika);

			rezultat = (1.0 / 2) * broiStraniNaMnogougulnika * duljinaNaStranataB * parametar1;
			printf("Liceto na pravilniq mnogougulnik e %lf", rezultat);
			break; 


		}
		default:
			printf("Greshen izbor, molq opitaite pak \n");
			izbor = 10;
			break;
		}
		printText();
		scanf_s("%d", &izbor);

	}




}

void readParam(double& parametar1)
{
	scanf_s("%lf", &parametar1);
}

void printText()
{
	printf("\nVuvedete chislo ot 1 do 10: \n");
}


