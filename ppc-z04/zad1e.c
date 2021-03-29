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

    int max=0;
    for(int i=1;i<=n;i++)
    {
        max=tab[0];
        if(tab[i] > max)
            tab[i]=max;
    }

    printf("max wartosc: %d\n", max);

    int ile=0;
    for(int i=1;i<=n-1;i++) //for(int i=0;i<n;i++) blad zamiast 1->2
    {
        if(tab[i] == max)
        {
            ile+=1;
        }
    }

printf("%d",ile);

return 0;


}


