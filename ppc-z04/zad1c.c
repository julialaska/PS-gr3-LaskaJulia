#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
    const int N = 1000;
    short tab[N];
    printf("Podaj liczbe elementów: ");
    int n;
    scanf("%d", &n);

     if(n <= 0 || n > N)
        {
            printf("Liczba elementów musi byc z przedzia³u [1, %d\n]!", N);
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

    int lewy, prawy;
    printf("Podaj wartosc lewy i prawy");
    scanf("%d %d",&lewy,&prawy);

    if( lewy < 0 || lewy > n)
    {
        printf("liczba dla zmiennej lewy poza przedzialem");
    }

     if( prawy < 0 || prawy > n)
    {
        printf("liczba dla prawy poza przedzialem");
    }

    int k= prawy;
    for(int i=lewy; i<=(lewy+prawy)/2;i++)
    {
        int temp=tab[i];
        tab[i]=tab[k];
        tab[k]=temp;
        k--;
    }
      for(int j = 0; j < n; ++j)
        {
            printf("%5d ", tab[j]);
        }
    printf("\n");

    return 0;
    }
