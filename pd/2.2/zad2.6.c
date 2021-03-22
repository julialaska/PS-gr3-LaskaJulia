#include <stdio.h>
#include <stdlib.h>

double potega(unsigned int n,unsigned int m)
{
    int wynik=1;
    int abs_m=abs(m);
    if(n==0)
        return 0;

    for(int i=0;i<abs_m;i++)
            wynik*=n;

    return wynik;
}

int main()
{
    unsigned int n,m;
    printf("podaj n:");
    scanf("%d",&n);
    printf("podaj m:");
    scanf("%d",&m);

    if(n==0 && m==0)
        return 1;
    printf("%f",potega(n,m));

    return 0;
}
