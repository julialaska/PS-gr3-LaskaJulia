//Napisz funkcjê, której argumentami s¹ n typu int oraz w wskaŸnik do int, która przepisuje wartoœæ n do zmiennej wskazywanej przez w
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
