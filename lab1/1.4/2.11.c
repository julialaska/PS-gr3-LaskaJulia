#include <stdio.h>
#include <stdlib.h>

int pierw(int n)
{
    float sqrt = n/2;
    float temp = 0;
    while(sqrt != temp)
    {
        temp = sqrt;
        sqrt = ( n/temp + temp)/ 2;
    }
    return (int)sqrt;
}
int suma_pierw(int n)         // float
{
    int suma=0;               // float
    for(int i=0;i<=n;i++)
    {
        suma+=(int)pierw(i); //suma+=(int)sqrt(i); #include<math.h>
    }
    return suma;
}

int main()
{
    int  n;

    printf("podaj n");
    scanf("%d", &n);

    printf("%d\n",suma_pierw(n)); // wynik float z liczbami po przecinku
    printf("%d",pierw(n));

    return 0;
}
