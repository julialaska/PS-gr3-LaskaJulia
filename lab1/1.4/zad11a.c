#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a, b , c, d, delta;
    float x,x1, x2;
    printf("Podaj a,b,c,d");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    a=abs(a);
    delta=b*b-(4*abs(a)*(c-d));
    printf("delta =%f\n", delta);
    if(delta<0)
        return -1;
    else if(delta==0)
    {
        x=-b/2*abs(a);

    }
    else if(delta>0)
    x1=-b-sqrt(delta)/2*abs(a);
    x2=-b+sqrt(delta)/2*abs(a);

    if(x1<x2)
        printf("najmniejszy x jest rowny %f",x1);
    else
        printf("najmniejszy x jest rowny %f",x2);

    return 0;
}
