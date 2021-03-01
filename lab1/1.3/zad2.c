#include<stdio.h>

int main()
{
    int liczba1,liczba2;
    printf("Podaj dwie liczby calkowite");
    scanf("%d" "%d", &liczba1, &liczba2);

    if(liczba1>liczba2)
        printf(" wieksza jest liczba1 czyli %d",liczba1);
    else if(liczba2>liczba1)
        printf("wieksza jest liczba2 czyli %d", liczba2);
    else if(liczba1=liczba2)
        printf("liczby sa rowne i wynosza %d i %d", liczba1,liczba2);

    return 0;
}
