#include<stdio.h>

int main()
{
    int n,m;
    printf("Podaj liczbe calkowita n");
    scanf("%d", &n);
    printf("Podaj liczbe calkowita m");
    scanf("%d", &m);
    for(int i=n; i<m; i+=n)
        printf("%d\n",i );
    return 0;




}
