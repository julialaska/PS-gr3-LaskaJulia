#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(const short tab[],int n);
void generuj(short tab[],int n);
short sumaDodatnich(const short tab[], int n);
short sumaUjemnych(const short tab[],int n);


int main(void)
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

     if(n <= 0 || n > N)
        {
            printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
            return 1;
        }

    generuj(tab,n);
    wypisz(tab,n);
    sumaDodatnich(tab,n);
    sumaUjemnych(tab,n);


    return 0;
}


void wypisz(const short tab[],int n)
{
    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");
}

void generuj(short tab[],int n)
{
    srand(time(0));
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand()%198-99;
        }

}

short sumaDodatnich(const short tab[], int n)
{
    int suma=0;
    for(int i=0; i<n;i++)
    {
        if(tab[i]>0)
        {
            suma+=tab[i];
        }
    }
    printf("suma dodatnich : %d\n", suma);
}

short sumaUjemnych(const short tab[],int n)
{
    int suma2=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0)
        {
            suma2+=tab[i];
        }
    }
    printf("suma ujemnych : %d\n", suma2);
}

