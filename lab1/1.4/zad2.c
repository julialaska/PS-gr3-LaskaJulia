#include<stdio.h>

int main()
{
    int n,m;
    printf("Podaj liczbe calkowita n");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita m");
    scanf("%d", &m);

    for(int i=1; i<=m; i++)
    {
        printf("%d\n",n*i);
    }
    return 0;




}
