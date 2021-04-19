#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generuj(short tab[],int n,short minWartosc,short maxWartosc);
void wypisz(const short tab[],int n);
void collatz(short tab[],int n);

int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if(n <= 0 || n > N)
        {
            printf("Liczba elementów musi by ́c z przedziału [1, %d\n]!", N);
            return 1;
        }

    generuj(tab,n,2,10);
    wypisz(tab, n);
    //collatz(tab, n);
    printf("\n");
    //wypisz(tab, n);

    return 0;
    }



    void generuj(short tab[],int n,short minWartosc,short maxWartosc)
    {

        srand(time(0));
        for(short*p = tab; p < tab + n; ++p)
            {
                *p = rand() %(maxWartosc-minWartosc + 1)  + minWartosc;
            }
    }


    void wypisz(const short tab[],int n)
    {
        for(const short*p = tab; p < tab + n; ++p)
            {
                printf("%5d ",*p);
            }
        printf("\n");
    }


    void collatz(short tab[],int n)
    {
        for(short*p = tab; p < tab + n; ++p)
            {
                if(*p <= 0)
                {
                    continue;
                }
                if(*p % 2 == 1)
                    {
                        *p = 3* *p + 1;
                    }
                else
                    {
                    do
                    {
                        *p /= 2;
                    }
                    while(*p % 2 == 0);
                    }
            }
    }
