//Napisz funkcj�, kt�ra dostaje jako argument dodatni� liczb� ca�kowit� n, rezerwuje w pami�ci blok n zmiennych typu double
//i zwraca jako warto�� wska�nik do pocz�tku zarezerwowanego bloku pami�ci.
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
