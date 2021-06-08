/*Napisz funkcj�, kt�ra otrzymuje w argumencie napis i podmienia w nim wszystkie ma�e litery na du�e litery.
Zak�adamy, �e napis przechowywany jest w tablicy o elementach typu char, sk�ada si� wy��cznie z liter �aci�skich i bia�ych znak�w,
oraz �e system ,na kt�rym jest kompilowany i uruchamiany program, u�ywa standardowego kodowania ASCII.*/


#include<stdio.h>
#include<stdlib.h>

void male_na_duze(char *nap)
{
    for(int i=0; nap[i]!=0; i++)
    {
        if((nap[i]>='a')&&(nap[i]<='z'))
        {
            nap[i]-=('a'-'A');
        }

    }
}


int main()
{
    char nap[100];
    scanf("%s", &nap);

    male_na_duze(nap);
    printf("%s", nap);

    return 0;
}
