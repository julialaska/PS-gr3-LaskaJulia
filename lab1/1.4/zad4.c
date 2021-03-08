#include<stdio.h>

int main()
{
    int n, silnia=1;
    printf("Podaj liczbe calkowita n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        silnia*=i;
    printf("Silnia z %d wynosi %d\n", n, silnia);
     return 0;

}
