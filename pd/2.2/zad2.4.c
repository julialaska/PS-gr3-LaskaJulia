#include<stdio.h>
#include<stdlib.h>

int pow(unsigned int n)
{
    int wynik=1;
    int abs_n=abs(n);
    for(int i=1;i<=abs_n;i++)
    {
       wynik*=2;
    }
    return wynik;
}

int main()
{
    unsigned int n;
    printf("Podaj n: ");
    scanf("%d", &n);
    printf("%d",pow(n));

    return 0;
}
