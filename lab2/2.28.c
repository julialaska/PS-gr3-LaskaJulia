#include <stdio.h>
#include <stdlib.h>

unsigned long long f(int n, int m)
{
    if(m == 0)
        return n;
    else if (n == m)
        return m = n;
    else
        return n - m + f(n-1,m) +f(n,m-1);
}

int main()
{
    printf("%llu", f(3,2));
    return 0;
}
