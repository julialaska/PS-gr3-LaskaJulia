#include<stdio.h>
int main()
{
    int n;
    printf("Podaj liczbe calkowita:");
    scanf("%d",&n);

    if(n >= 0)
        printf("wartosc bezwzgledna= %d", n);
     else
       printf("wartosc bezwzgledna= %d", n*-1);

return 0;
}
