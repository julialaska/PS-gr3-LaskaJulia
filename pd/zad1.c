#include<stdio.h>

int main()
{
    int rok;
    printf("Podaj rok");
    scanf("%d",&rok);

    int suma;

    if(rok%4==0)//if((rok%4==0 && rok%100!=0) || rok%400==0)
      {
           suma=31+29+31;
           printf("rok przestepny, suma trzech miesiecy to %d",suma);
      }
      else
      {
        printf("rok nieprzestepny");
      }



 return 0;
}
