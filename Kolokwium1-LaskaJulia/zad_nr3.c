#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n;
    printf("Podaj n\n");
    scanf("%f",&n);

    if(n == 2)
        printf("mianownik nie moze byc rowny 0 ");

    float ciag;
    ciag=(2*n+7)/((n-2)*(n-2));

    printf("%f",ciag);

    return 0;
}

