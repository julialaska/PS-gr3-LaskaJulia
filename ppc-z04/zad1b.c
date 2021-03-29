#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

    if(n <= 0 || n > N)
        {
            printf("Liczba elementow musi byc z przedziału [1, %d\n]!", N);
            return 1;
        }

    short lim = 100;
    srand(time(0));

    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand() % lim + 1;
        }

    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");


    for(int j = 0; j < n; ++j)
        {
            if (tab[j] % 2 == 0)
            {
                tab[j] *= -1;
            }
            else
            {
                tab[j] *= 2;
            }
        }


    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
    }
    printf("\n");


    for(int j = 0; j < n; ++j)
    {
        if(tab[j]>0)
        {
            tab[j] = 1;
        }
        else if(tab[j]<0)
        {
            tab[j] = -1;
        }
    }

        for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
    }
    printf("\n");


    return 0;
    }
