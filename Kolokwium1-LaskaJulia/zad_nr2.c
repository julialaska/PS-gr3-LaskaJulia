#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
    printf("Podaj x");
    scanf("%d",&x);

    dzielniki(x);

    return 0;
}


int dzielniki(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(x%i == 0)
            printf("%d\n",i);
    }
}

