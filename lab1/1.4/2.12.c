#include <stdio.h>
#include <stdlib.h>

int suma_pierw2(int n,int m)
{
    int suma=0;
    for(int i=0;i<=n;i++)
    {
        suma+=pow(i,1/m);
    }

    return suma;
}

int main()
{
    int  n,m;
    printf("podaj n");
    scanf("%d", &n);
    printf("podaj m");
    scanf("%d", &m);
    if (m<1)
        printf("m musi byc wieksza od 1");
    else
        printf("%f",suma_pierw2(n,m));

    return 0;
}
