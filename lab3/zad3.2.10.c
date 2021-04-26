//Napisz bezargumentow¹ funkcjê, która rezerwuje pamiêæ dla pojedynczej zmiennej typu double i zwraca jako wartoœæ wskaŸnik do niej.
#include<stdio.h>
#include<stdlib.h>


double * zad()
{
    return malloc(sizeof(double));
}

int main()
{
    int zmienna = 10;
    printf("%d\n", zmienna);
    printf("%p",zad());
    return 0;
}
