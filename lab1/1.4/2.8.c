#include <stdio.h>
#include <stdlib.h>

int sqrt(int n)
{
    float sqrt = n/2;
    float temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        printf("tmp= %f\n",temp);
        sqrt = ( n/temp + temp)/ 2;
        printf("tmp %f\n",sqrt);
    }
    return (int)sqrt;
}

int main()
{
    int n;
    printf("Podaj n ");
    scanf("%d", &n);
    printf("wynik= %d\n",sqrt(n));

    return 0;
}
