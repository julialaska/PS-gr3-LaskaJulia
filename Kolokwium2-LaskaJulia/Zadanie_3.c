/*Zdefiniuj sta�� MAX_LEN, a nast�pnie zdefiniuj C-struktur� Produkt o polach nazwa typu char[MAX_LEN],
 cenaBrutto typu double oraz stawkaVAT typu float. Zdefiniuj nast�puj�ce funkcje:
Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
Produkt makeProdukt(const Produkt *produkt);
double cenaNetto(const Produkt *produkt);
double kwotaVAT(const Produkt *produkt);
void show(const Produkt *produkt);
Napisz program testuj�cy napisane funkcje.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX_LEN 50

    typedef struct Produkt{
    char nazwa[MAX_LEN];
    double *cenaBrutto;
    float *stawkaVat;
    } Produkt;


Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
    nazwa->nazwa[];
    cenaBrutto->cenaBrutto;

}

Produkt makeProdukt(const Produkt *produkt)
{
     scanf("%s", produkt->nazwa);
     scanf("%f", produkt->cenaBrutto);
     scanf("%f", produkt->stawkaVat);

     produkt->nazwa=nazwa;
     produkt->cenaBrutto=cenaBrutto;
     produkt->stawkaVat=stawkaVAT;

}

void show(const Produkt *produkt)
{
    printf("nazwa: %s, cena brutto: %f, stawka vat: %f", produkt->nazwa, produkt->cenaBrutto, produkt->stawkaVat);
}

double cenaNetto(const Produkt *produkt)
{
    produkt->cenaBrutto = cenaBrutto;
    double pom = stawkaVAT * cenaBrutto ;
    return produkt.cenaBrutto-pom;
}

int main()
{
    Produkt pierwszy;

}
