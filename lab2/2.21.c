#include<stdio.h>

unsigned long long rekurencja(int n)
{
    if(n == 0)
        return 1;
    else
        return 2 * rekurencja(n-1)+5;
}
unsigned long long rekurencja_i(int n)
{

    unsigned long long a=1;
    for(int i=0;i<n;i++)
    {
        unsigned long long a_n = 2*a+5;
        a=a_n;
    }
    return a;
}
int main()
{

    printf("%llu\n",rekurencja(62));
   // printf("%llu",rekurencja_i(62));
    return 0;
}
