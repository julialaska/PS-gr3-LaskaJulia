#include<stdio.h>
#include<math.h>

int main()
{
      int liczba1,liczba2;
    printf("Podaj dwie liczby calkowite");
    scanf("%d" "%d", &liczba1, &liczba2);

    if(abs(liczba1)>abs(liczba2))
        printf(" wieksza jest wartosc bezwzgledna z liczba1 czyli %d",abs(liczba1));
    else if(abs(liczba2)>abs(liczba1))
        printf("wieksza jest wartosc bezwzgledna z liczba2 czyli %d", abs(liczba2));
    else if(abs(liczba1)==abs(liczba2))
        printf("wartosci bezwzgledne liczb sa rowne i wynosza %d i %d", abs(liczba1),abs(liczba2));

    return 0;

}
