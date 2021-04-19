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
            printf("Liczba elementów musi byc z przedzialu [1, %d\n]!", N);
            return 1;
        }

    short lim = 100;
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


    short lewy = 5, prawy = 11;
    //printf("Podaj wartosc lewy i prawy");
    //scanf("%d %d",&lewy,&prawy);

    //if( lewy < 0 || lewy > n)
    //{
        //printf("liczba dla zmiennej lewy poza przedzialem");
    //}

    //if( prawy < 0 || prawy > n)
    //{
        //printf("liczba dla prawy poza przedzialem");
    //}

    short *l;
    short *p;
    short tmp;

    for(l = tab + lewy, p = tab + prawy; l< tab + ((prawy - lewy + 1)/2) + lewy ;++l,--p)
    {
        tmp = *l;
        *l=*p;
        *p=tmp;

    }

    for(short*p = tab; p < tab + n; ++p)
        {
            printf("%5d ",*p);
        }
    printf("\n");


    return 0;
    }
