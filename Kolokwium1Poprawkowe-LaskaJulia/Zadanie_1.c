#include<stdio.h>
#include<stdlib.h>


int ile_cyfr(int n)//int ile_liczb(int n) do liczb majacych 10 cyfr
{
    int ile = 0;
    if(n == 0)
    {
        return 1;
    }
    while(n > 0)
    {
        n=n/10;
        ile++;
    }
    return ile;
}

int main()
{
    long long int n;        //int n
    printf("podaj n \n");
    scanf("%lld",&n);       // %d

    printf("%d ",ile_cyfr(n));

    return 0;
}
