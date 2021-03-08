#include<stdio.h>

int main()
{
    unsigned int n, suma=0;
    printf("Podaj nieujemna calkowita liczbe n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        suma+=i*i;
    }
    printf("%d\n",suma);
    return 0;
}
