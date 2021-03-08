#include<stdio.h>

int main()
{
    int n,m,k;
    printf("Podaj liczbe calkowita n");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita m");
    scanf("%d", &m);
    printf("Podaj liczbe calkowita k");
    scanf("%d", &k);
     for(int i=0; i<k; i++)//int i-n/n+1; i<k/n+1;
    {
        if(n*i>m && n*i<k)
        printf("%d\n",n*i);
    }
    return 0;




}
