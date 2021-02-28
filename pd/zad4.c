#include<stdio.h>

int main()
{ float kwota, procent;
    kwota=1000;
    procent=0.06;

    for(int i=1;i<=3;i++)
    {
        kwota=kwota+kwota*procent;
        printf("%d.", i);
        printf("%f\n", kwota );

    }
    return 0;
}
