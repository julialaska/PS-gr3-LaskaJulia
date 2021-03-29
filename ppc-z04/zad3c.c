#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void odwroc(short tab[],int lewy,int prawy);
void wypisz(const short tab[],int n);
void generuj(short tab[],int n,short lim);

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


odwroc(tab,lewy,prawy);
wypisz(tab,n);

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
    srand(time(0));  // inicjalizacja generatora liczb pseudolosowych
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand() % lim + 1;
        }

}


void odwroc(short tab[],int lewy,int prawy)
{

    int k = prawy;
    for(int i=lewy; i<=(lewy+prawy)/2;i++)
    {
        int temp=tab[i];
        tab[i]=tab[k];
        tab[k]=temp;
        k--;
    }

}
