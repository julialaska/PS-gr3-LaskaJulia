#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void wypisz(int **tab, unsigned int n, unsigned m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%2d",tab[i][j]);
        }
        printf("\n");
    }
     printf("\n");
}

void obroc(int **tab, unsigned int n, unsigned m)
{
    for(int i=0;i<n;i++)
    {
        int tmp = tab[i][m-1];
        for(int j=m-1;j>=0;j--)
        {
            tab[i][j+1] = tab[i][j];
        }
        tab[i][0]=tmp;
    }
}


int main()
{
    srand(time(0));
    unsigned int n=3,m=3;
    int **tab=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        tab[i]=malloc(m*sizeof(int));
        for(int j=0;j<m;j++)
        {
            tab[i][j]=rand()%10;
        }
    }
    wypisz(tab,n,m);
    obroc(tab,n,m);
    wypisz(tab,n,m);

    return 0;
}
