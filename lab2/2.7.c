#include <stdio.h>
#inlcude <stdlib.h>

double potega(int n, int m)
{
    int wynik=1;
    int abs_m=abs(m);
    if(n==0)
        return 0;

    for(int i=0;i<abs_m;i++)
            wynik*=n
    if(m<0)
            return 1.0/wynik;
    else
        return wynik;

}

int main()
{
    int n,m;
    printf("n=");
    scanf("%d",&n);
    printf("m=");
    scanf("%d",&m);

    if(n==0 && m==0)
        return 1;
    printf("%f",potega(n,m));

    return 0;
}
