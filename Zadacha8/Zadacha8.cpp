#include <iostream>

int main()
{
   //Зеленчуков магазин Земеделски производител продава реколтата от градината на зеленчуковата борса продава зеленчуци за N
   // лева за килограм и плодове за М лева за килограм. 
   // Напишете програма която пресмята приходите от реколтата на производителя в долари( проверете в интернет курса на долара).

	double cenaPlodove; 
	printf("Vuvedete cena za kg plodove: \n");
	scanf_s("%lf", &cenaPlodove);
	double cenaZelenchuci;
	printf("Vuvedete cena za kg zelenchuci: \n");
	scanf_s("%lf", &cenaZelenchuci);
	double broiKgPlodove;
	printf("Vuvedete broi kg plodove: \n");
	scanf_s("%lf", &broiKgPlodove);
	double broiKgZelenchuci;
	printf("Vuvedete broi kg zelenchuci: \n");
	scanf_s("%lf", &broiKgZelenchuci);

	double cenaLev = (broiKgPlodove * cenaPlodove) + (broiKgZelenchuci * cenaZelenchuci);

	double cenaUSD = cenaLev * 0.60;
	printf("Cena USD %2.f$", cenaUSD);




}

