/*UWAGA! W poni¿szym programie do przechodzenia tablicy zamiast indeksów nale¿y u¿yæ wskaŸników,
 a ka¿dy operator indeksowania nale¿y zast¹piæ operatorem dereferencji. Napisz program, który deklaruje sta³¹ N=500,
  wczytuje do zmiennej n liczbê ca³kowit¹ z przedzia³u [1, N]
  i generuje n pocz¹tkowych elementów tablicy o wartoœciach ca³kowitych z przedzia³u od -200 do 100,
  a nastêpnie odwróci fragment tablicy przy pomocy funkcji odwróæ

    void odwroc(short tab[], int lewy, int prawy).

Po wygenerowaniu tablicy oraz po ka¿dej operacji nale¿y wypisaæ zawartoœæ tablicy. Przetestuj odpowiednio program.*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(short *tab,int n)
{
    for(short*w = tab; w < tab + n; ++w)
        {
            printf("%5d ",*w);
        }
    printf("\n");
}

void generuj(short *tab,int n,short przedzial1, short przedzial2)
{
    srand(time(0));
    for(short*wsk = tab; wsk < tab + n; ++wsk)
        {
            *wsk = rand() %(przedzial2-przedzial1)  + przedzial1;
        }

}

void odwroc(short *tab, int lewy, int prawy)
{

    short *pierwszy;
    short *drugi;
    short pom;

    for(pierwszy = tab + lewy, drugi = tab + prawy; pierwszy< tab + ((prawy - lewy + 1)/2) + lewy ;++pierwszy,--drugi)
    {
        pom = *pierwszy;
        *pierwszy=*drugi;
        *drugi=pom;

    }

}

int main(void)
{
    const int N = 500;
    short tab[N];
    printf("Podaj liczbe elementow: ");
    int n;
    scanf("%d", &n);

     if(n <= 0 || n > N)
        {
            printf("Liczba elementow musi byc z przedzialu [1, %d\n]!", N);
            return 1;
        }

    generuj(tab, n, -200,100);
    wypisz(tab,n);

    int lewy,prawy;
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
