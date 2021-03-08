#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    float a, b , c, d;
    int x=0;
    printf("Podaj a,b,c,d \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    a=abs(a);

    while(!((a*(x*x))+(b*x)+c>d))
    {
        x++;
    }
    printf("%d\n",x);
    return 0;

}
