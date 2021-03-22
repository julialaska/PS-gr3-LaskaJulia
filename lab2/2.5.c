#include<stdio.h>
#include<stdlib.h>

int potega(int n)
{
    int wynik=1;
    int abs_n=abs(n);
    for(int i=0;i<abs_n;i++)
    {
        wynik*=2;
    }
    if(n>0)
        return wynik;
    else
        return 1/wynik;
}
int main()
{
    int n;
    printf("podaj n");
    scanf("%d", &n);
    printf("%d", potega(n));

    return 0;
}
