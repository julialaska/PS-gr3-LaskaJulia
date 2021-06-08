/*Zdefiniuj sta³¹ MAX_LEN, a nastêpnie zdefiniuj C-strukturê Produkt o polach nazwa typu char[MAX_LEN],
 cenaBrutto typu double oraz stawkaVAT typu float. Zdefiniuj nastêpuj¹ce funkcje:
Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
Produkt makeProdukt(const Produkt *produkt);
double cenaNetto(const Produkt *produkt);
double kwotaVAT(const Produkt *produkt);
void show(const Produkt *produkt);
Napisz program testuj¹cy napisane funkcje.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 50

typedef struct Produkt {
    char nazwa[MAX_LEN];
    double cenaBrutto;
    float stawkaVat;
    } Produkt;

Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
  nazwa -> nazwa = nazwa;
  &cenaBrutto-> cenaBrutto;
  &stawkaVAT-> stawkaVAT;
}

void show(const Produkt *produkt)
{
    printf("nazwa: %s, cena brutto: %f, stawka vat: %f", produkt.nazwa, produkt.cenaBrutto, produkt.stawkaVat);
}

int main()
{
    Produkt pierwszy;

}
