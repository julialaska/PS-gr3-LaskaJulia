//Napisz funkcj�, kt�rej argumentami s� n typu int oraz w wska�nik do int, kt�ra przepisuje warto�� n do zmiennej wskazywanej przez w
#include<stdio.h>
#include<stdlib.h>

void foo(int n,int *w)
{
    *w = n;
}

int main()
{
    int n = 1;
    int w = 2;

    printf("%d\n", w);
    foo(n,&w);
    printf("%d\n", w);
    return 0;
}
