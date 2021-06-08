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

typedef struct Produkt{
char nazwa[MAX_LEN];
double cenaBrutto;
float stawkaVAT;
} Produkt;


Produkt makeProdukt(const char *nazwa, double cenaBrutto, float stawkaVAT)
{
   // Produkt *pro=malloc(sizeof(Produkt)+nazwa*cenaBrutto*stawkaVAT);
    /*pro->nazwa=nazwa;
    pro->cenaBrutto=cenaBrutto;
    pro->stawkaVat=stawkaVAT;*/

    Produkt* produkt = malloc(sizeof(Produkt));
    produkt->nazwa; //=nazwa
    produkt->cenaBrutto=cenaBrutto;
    produkt->stawkaVAT=stawkaVAT;

}

Produkt makeProdukt_1(const Produkt *produkt)
{
    /*
     scanf("%s", produkt->nazwa);
     scanf("%f", produkt->cenaBrutto);
     scanf("%f", produkt->stawkaVat);

     produkt->nazwa=nazwa;
     produkt->cenaBrutto=cenaBrutto;
     produkt->stawkaVat=stawkaVAT;
     */

    produkt->nazwa;
    produkt->cenaBrutto;
    produkt->stawkaVAT;

}

void show(const Produkt *produkt)
{
    printf("nazwa: %s, cena brutto: %f, stawka vat: %f", produkt->nazwa, produkt->cenaBrutto, produkt->stawkaVAT);
}

double cenaNetto(const Produkt *produkt)
{
    produkt->cenaBrutto;
    produkt->stawkaVAT;
    double pom = (produkt->stawkaVAT/100) * (produkt->cenaBrutto) ;
    double cenaNetto = (produkt->cenaBrutto)-pom;
    return cenaNetto;
}

double kwotaVAT(const Produkt *produkt)
{
    produkt->stawkaVAT;
}
/*
void produkt_destroy (Produkt *pro) {
    free(pro->nazwa);
    pro->nazwa = NULL;
    free(pro->cenaBrutto);
    pro->cenaBrutto = NULL;
    free(pro->stawkaVAT);
    pro->stawkaVAT = NULL;
}
*/
int main()
{
    Produkt pierwszy = {"samochod", 50000, 23};

    makeProdukt("samochod",50000,23);
    show(&pierwszy);

    //printf("%f",cenaNetto(&pierwszy));
    return 0;

}
