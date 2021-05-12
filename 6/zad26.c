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


int** transpose(int ** tab, unsigned int n, unsigned int m)
{
    int **nowa = malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        nowa[i]=malloc(n*sizeof(int));
        for(int j=0;j<n;j++)
        {
            nowa[i][j]=tab[j][i];
        }
    }
    return nowa;
}



int main()
{
    srand(time(0));
    unsigned int n=2,m=4;
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
    int**tab2=transpose(tab,n,m);
    wypisz(tab2,m,n);

    return 0;

}
