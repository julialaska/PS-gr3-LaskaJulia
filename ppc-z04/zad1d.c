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
            printf("Liczba elementow musi byc z przedzia³u [1, %d\n]!", N);
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

   int ilosc_niep=0;
   int ilosc_parz=0;

   for(int i=0;i<n;i++)
   {
       if(tab[i]%2 == 0)
            ilosc_parz += 1;
        else
            ilosc_niep += 1;
   }
printf("ilosc parzystych elementow tablicy: %d \n", ilosc_parz);
printf("ilosc nieparzystych elementow tablicy: %d ", ilosc_niep);

return 0;
}
