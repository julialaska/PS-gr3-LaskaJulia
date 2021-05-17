#include<stdio.h>
#include<stdlib.h>

struct student
{
    char* imie;
    char* nazwisko;
    char* adres;
    char* pesel;
    char* kierunek;
    char* nr_leg;
};

typedef struct student record;

void dane(struct student *record)
{
    printf("podaj imie ");
    scanf("%s\n",&record->imie);

    printf("podaj nazwisko ");
    scanf("%s\n",&record->nazwisko);

    printf("podaj adres ");
    scanf("%s\n",&record->adres);

    printf("podaj pesel ");
    scanf("%s\n",&record->pesel);

    printf("podaj kierunek ");
    scanf("%s\n",&record->kierunek);

    printf("podaj nr legitymacji ");
    scanf("%s\n",&record->nr_leg);
}


int main()
{
    struct student pierwszy;

    dane(&pierwszy);
    return 0;
}
