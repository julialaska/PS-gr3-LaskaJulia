#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(const short tab[],int n);
void generuj(short tab[],int n);
int ileDodatnich(const short tab[], int n);
int ileUjemnych(const short tab[],int n);
int ileZerowych(const short tab[],int n);

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

    generuj(tab,n);
    wypisz(tab,n);
    ileDodatnich(tab,n);
    ileUjemnych(tab,n);
    ileZerowych(tab,n);


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

void generuj(short tab[],int n)
{
    srand(time(0));
    for(int j = 0; j < n; ++j)
        {
            tab[j] = rand()%198-99;
        }

}

int ileDodatnich(const short tab[], int n)
{
    int suma=0;
    for(int i=0; i<n;i++)
    {
        if(tab[i]>0)
        {
            suma++;
        }
    }
    printf("ilosc dodatnich : %d\n", suma);
}

int ileUjemnych(const short tab[],int n)
{
    int suma2=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]<0)
        {
            suma2+=1;
        }
    }
    printf("ilosc ujemnych : %d\n", suma2);
}
int ileZerowych(const short tab[],int n)
{
    int suma3=0;
    for(int i=0; i<n;i++)
    {
        if(tab[i]==0)
        {
            suma3++;
        }
    }
    printf("ilosc zerowych : %d\n", suma3);
}

