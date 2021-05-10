#include<stdio.h>
#include<stdlib.h>


float ciag(float n)
{
    return (2*n+7)/((n-2)*(n-2));
}

int main()
{
    float n;
    printf("Podaj n\n");
    scanf("%f",&n);

    if(n == 2)
        {
        printf("mianownik nie moze byc rowny 0 ");
        return -1;
        }


    printf("%f",ciag(n));

    return 0;
}


