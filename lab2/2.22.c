#include<stdio.h>
#include<stdlib.h>


unsigned long long rekurencja(int n)
{
    if(n < 2)
        return 1;
    else
        return rekurencja(n-1) + 2*rekurencja(n-2)+3;
}
unsigned long long rekurencja_i(int n)
{

    unsigned long long a=1,a1=1;
    for(int i=1;i<n;i++)
    {
        unsigned long long a_n = a+2*a1+3;
        a1=a;
        a=a_n;

    }
    return a;
}
int main()
{
    //printf("%llu\n", rekurencja(45));
   printf("%llu", rekurencja_i(45));
    return 0;
}
