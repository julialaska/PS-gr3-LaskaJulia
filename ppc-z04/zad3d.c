#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(const short tab[],int n);
void generuj(short tab[],int n,short lim);
int ileNieparzystych(const short tab[],int n);
int ileParzystych(const short tab[],int n);

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

    generuj(tab,n,100);
    wypisz(tab,n);

    ileNieparzystych(tab,n);
    ileParzystych(tab,n);

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

void generuj(short tab[],int n,short lim)
{
    srand(time(0));
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand() % lim + 1;
        }

}
int ileNieparzystych(const short tab[],int n)
{
   int ilosc_niep=0;

   for(int i=0;i<n;i++)
   {
       if(tab[i]%2 != 0)
             ilosc_niep += 1;
   }
printf("ilosc nieparzystych elementow tablicy: %d\n ", ilosc_niep);

}
int ileParzystych(const short tab[],int n)
{
   int ilosc_p=0;

   for(int i=0;i<n;i++)
   {
       if(tab[i]%2 == 0)
             ilosc_p += 1;
   }
printf("ilosc parzystych elementow tablicy: %d\n ", ilosc_p);

}
