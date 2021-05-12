#include<stdio.h>
#include<stdlib.h>

void wypisz(int t[][3], unsigned int n, unsigned m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",t[i][j]);
        }
        printf("\n");
    }
     printf("\n");
}


int main()
{
    int n,m;
    printf("podaj wymiary n i m ");
    scanf("%d %d",&n,&m);


    int t[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    wypisz(t,n,m);



    return 0;
}
