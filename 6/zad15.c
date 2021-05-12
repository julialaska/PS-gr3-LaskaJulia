#include<stdio.h>
#include<stdlib.h>

int sum(int n, int t[][100][100])
{
    int i, j, k, suma = 0;

    for(i=0;i<n;i++)
        for(j=0;j<100;j++)
            for(k=0;k<100;k++)
                suma+=t[i][j][k];
    return suma;
}

int main()
{
    int n;
    printf("podaj n ");
    scanf("%d",&n);

    int t[n][100][100];

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<100;j++)
        {
            for(int k=0;k<100;k++)
            {
                t[i][j][k]=1;
            }
        }
    }


    printf("%d",sum(n,t));

    return 0;

}
