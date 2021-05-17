#include<stdio.h>
#include<stdlib.h>

struct Complex
{
    double re,im;

};

typedef struct Complex cmp;

cmp sum(cmp first, cmp second)
{
    cmp tmp =  {first.re + second.re, first.im + second.im};
    return tmp;
}

int main()
{
    cmp first = {10,20};
    cmp second = {15,30};
    cmp result;
    result = sum(first,second);
    printf("Suma : %f + i*%f\n", result.re, result.im );

    return 0;
}
