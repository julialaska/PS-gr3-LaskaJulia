#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
     int wybor;
     int a,h,bok1,bok2,bok3,p;
     float pole2;


     printf("Obliczanie pola trojkata. Wybierz sposob:\n");
     printf("1. jesli wolisz policzyc uzywajac dl.podstawy i wysokosci\n");
     printf("2. jesli wybierasz liczenie wzorem Herona\n");
     scanf("%d", &wybor);


     if(wybor == 1)
     {
        printf("Podaj podstaawe oraz wysokosc trojkata");
        scanf("%d" "%d", &a, &h);
        printf("Pole trojkata jest rowne %d", a*h/2);
     }
     else
     {
        printf("Podaj trzy boki");
        scanf("%d" "%d" "%d", &bok1, &bok2, &bok3);

        p=(bok1 + bok2 + bok3)/2;//polowa obwodu
        pole2=sqrt(p * (p-bok1) * (p-bok2) * (p-bok3));


        printf("pole jest rowne %lf ", pole2);
     }

 return 0;

}
