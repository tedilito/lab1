
#include <iostream>

int main()
{
	//Задача: Цирк Лили ученичка от 3 клас има списък учебници за Пазаруване. 
	// Цените (реални числа двойна точност) на учебнищите са по математика, български език, английски език и физика се въвеждат от клавиатурата.
	// Родителите на Лили и дават сума (въвежда се от клавиатурата) за покупка. 
	// В града пристига цирк и Лили иска да отиде. 
	// Напишете програма, с която Лили да пресметне дали ще и стигнат парите да отиде на цирк и да си купи учебници. 
	// Резултата от изчислението да се закръгля до втория знак

	double cenaMatematika;
	printf("Vuvedete cenata na uchebnika po Mat: \n");
	scanf_s("%lf", &cenaMatematika);

	double cenaBulgarski;
	printf("Vuvedete cenata na uchebnika po BEL: \n");
	scanf_s("%lf", &cenaBulgarski);

	double cenaAngl;
	printf("Vuvedete cenata na uchebnika po AE: \n");
	scanf_s("%lf", &cenaAngl);

	double cenaFizika;
	printf("Vuvedete cenata na uchebnika po Fizika: \n ");
	scanf_s("%lf", &cenaFizika);

	double pariOtRoditeli;
	printf("Vuvedete sumata, koqto roditelite sa dali: \n");
	scanf_s("%lf", &pariOtRoditeli);

	double cenaCirk;
	printf("Vuvedete cenata na cirkut: \n");
	scanf_s("%lf", &cenaCirk);

	double totalRazhodiZaUchebnici = cenaAngl + cenaBulgarski + cenaFizika + cenaMatematika;
	double moneyLeft = pariOtRoditeli - totalRazhodiZaUchebnici;

	if (moneyLeft >= cenaCirk) //otiva na cirk
	{
		printf("Lili ima pari za da otide na cirk \n");
		printf("Parite, koito e dala za uchebnici sa %.2f \n", totalRazhodiZaUchebnici);
		if (moneyLeft - cenaCirk > 0)
		{
			printf("Na lili i ostavat %.2f pari", moneyLeft - cenaCirk);
		}
		else 
		{
			printf("Lili izharchi vsichki pari");
		}
	}
	else // ne otiva
	{
		printf("Lili nqma pari za da otide na cirk \n");
		printf("Trqbvat i %.2f pari za da moje da otide na cirk", cenaCirk - moneyLeft);
	}


}

