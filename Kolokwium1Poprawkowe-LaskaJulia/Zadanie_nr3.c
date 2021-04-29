#include<stdio.h>
#include<stdlib.h>

int dzielniki(int x)
{
    int ile = 0;
    for(int i=1;i<=x;i++)
    {
        if(x%i == 0)
        {
            ile++;
        }
    }
    return ile;
}

int main()
{
    int x;
    printf("Podaj x ");
    scanf("%d",&x);

    printf("ilosc dzielnikow = %d\n", dzielniki(x));

    return 0;
}

