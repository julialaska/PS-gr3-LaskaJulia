#include<stdio.h>

int main()
{
    int liczba1,liczba2,liczba3;
    printf("Podaj trzy liczby calkowite");
    scanf("%d" "%d" "%d", &liczba1, &liczba2, &liczba3);

    if(liczba1>liczba2 && liczba1>liczba3)
        printf(" najwieksza jest liczba1 czyli %d",liczba1);
    else if(liczba2>liczba1 && liczba2>liczba3)
        printf("najwieksza jest liczba2 czyli %d", liczba2);
    else if(liczba3>liczba2 && liczba3>liczba1)
        printf("najwieksza jest liczba3 czyli %d", liczba3);
    else if(liczba1=liczba2=liczba3)
        printf("liczby 1 i 2 i 3 sa rowne i wynosza %d i %d i %d", liczba1,liczba2,liczba3);
    else if(liczba1==liczba2)
        printf("liczby 1 i 2 sa rowne i wynosza %d i %d", liczba1,liczba2);
    else if(liczba1==liczba3)
        printf("liczby 1 i 3 sa rowne i wynosza %d i %d", liczba1,liczba3);
    else if(liczba2==liczba3)
        printf("liczby 2 i 3 sa rowne i wynosza %d i %d", liczba2,liczba3);

    return 0;
}
