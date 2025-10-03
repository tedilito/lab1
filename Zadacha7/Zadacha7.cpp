

#include <iostream>

int main()
{
    //Задача: конзолен конвертор -от градуси °С към градуси °F Напишете програма, която чете градуси по скалата на Целзий (С) и ги 
    // преобразува до градуси по скалата на Фаренхайт (F). 
    // Потърсете в Интернет подходяща формула, с която да извършите изчисленията. Закръглете резултата до 2 символа след десетичния знак.

    float InputCelcius;
    printf("Vuvedete gradusi v celzii: \n");
    scanf_s("%f", &InputCelcius);
    float farenhait = (InputCelcius * 9 / 5) + 32;
    printf("Temperaturata %.2f ot celzii vuv farenhait e %.2f",InputCelcius, farenhait);
}

