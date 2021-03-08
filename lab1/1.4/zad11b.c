#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a, b , c, d, delta;
    float x1, x2;
    printf("Podaj a,b,c,d");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    a=abs(a);
    delta=a*a-(4*5*(b-c));
    printf("delta =%f\n", delta);
    x1=a*a-sqrt(delta)/2*5;
    x2=a*a+sqrt(delta)/2*5;

    if(x1>x2)
        printf("najwiekszy x jest rowny %f",x1);
    else
        printf("najwiekszy x jest rowny %f",x2);

    return 0;
}
