#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);
    if(n <= 0 || n > N)
        {
            printf("Liczba elementów musi býc z przedziału [1, %d\n]!", N);
            return 1;
        }


    short lim = 999;
    srand(time(0));

    for(short*p = tab; p < tab + n; ++p)
        {
            *p = rand() % lim + 1;
        }

    for(short*p = tab; p < tab + n; ++p)
        {
            printf("%5d ",*p);
        }
    printf("\n");

    for(short*p = tab; p < tab + n; ++p)
        {
            if(*p % 2 != 0)
                {
                    *p *= 2;
                }
            else if(*p % 2 == 0)
                {
                    *p *= -1;
                }
        }

        printf("\n");// Wypisuje n pocz  ̨atkowych elementów tablicy

        for(short*p = tab; p < tab + n; ++p)
            {
                printf("%5d ",*p);
            }
        printf("\n");

         for(short*p = tab; p < tab + n; ++p)
        {
            if(*p > 0)
                {
                    *p = 1;
                }
            //else if(*p <= 0)
            //  {
            //    *p = -1;
            //}
        }

        for(short*p = tab; p < tab + n; ++p)
        {
            printf("%5d ",*p);
        }
        printf("\n");


    return 0;
    }









