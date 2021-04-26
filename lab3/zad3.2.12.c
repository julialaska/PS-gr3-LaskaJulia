//Napisz funkcjê, która dostaje jako argument dodatni¹ liczbê ca³kowit¹ n, rezerwuje w pamiêci blok n zmiennych typu double
//i zwraca jako wartoœæ wskaŸnik do pocz¹tku zarezerwowanego bloku pamiêci.
#include<stdio.h>
#include<stdlib.h>

int * zad(unsigned int n)
{
    return malloc(n*sizeof(double));
}

int main()
{
    printf("%p", zad(10));
    return 0;
}
