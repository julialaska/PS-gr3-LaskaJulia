#include <stdio.h>
#include <stdlib.h>



struct student{
char* imie;
char* nazwisko;
char* adres;
char* pesel;
char* kierunek;
char* nr_legitymacji;
};



typedef struct student st;



void dodaj(struct student *s){
printf("Podaj imie: ");
scanf("%s", &s -> imie);
printf("Podaj nazwisko: ");
scanf("%s", &s -> nazwisko);
printf("Podaj adres: ");
scanf("%s", &s -> adres);
printf("Podaj pesel: ");
scanf("%s", &s -> pesel);
printf("Podaj kierunek: ");
scanf("%s", &s -> kierunek);
printf("Podaj nr_legitymacji: ");
scanf("%s", &s -> nr_legitymacji);
}



int main()
{
struct student s1;
dodaj(&s1);
printf("%s\n", &s1.imie);
return 0;
}
