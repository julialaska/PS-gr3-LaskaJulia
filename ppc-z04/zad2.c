#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generuj(short tab[],int n,short minWartosc,short maxWartosc);
void wypisz(const short tab[],int n);

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

generuj(tab, n, 2,5);
wypisz(tab, n);

printf("\n");
wypisz(tab, n);

return 0;
}

void generuj(short tab[],int n,short minWartosc, short maxWartosc)
{
    srand(time(0));  // inicjalizacja generatora liczb pseudolosowych
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand() %(maxWartosc-minWartosc)  + minWartosc;
        }

}

void wypisz(const short tab[],int n)
{
    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");
}
