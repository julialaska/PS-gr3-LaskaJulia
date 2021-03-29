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
            printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
            return 1;
        }

    // Inicjalizuje n poczatkowych elementów tablicy
    // liczbami o warto ́sciach z przedziału [1..lim]

    short lim = 999;
    srand(time(0));  // inicjalizacja generatora liczb pseudolosowych
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand() % lim + 1;
        }
    // Wypisuje n pocz  ̨atkowych elementów tablicy
    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");

    // Modyfikuje n pocz  ̨atkowych elementów tablicy
    for(int j = 0; j < n; ++j)
        {
            if(tab[j] <= 0)
             {
                 continue;
             }
            if(tab[j] % 2 == 1)
                {
                    tab[j] = 3*tab[j] + 1;
                }
            else
                {
                  do
                        {
                            tab[j] /= 2;
                        }
                  while(tab[j] % 2 == 0);
            }
    }
    printf("\n");

    // Wypisuje n pocz  ̨atkowych elementów tablicy
    for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
    }
    printf("\n");

    return 0;
    }
