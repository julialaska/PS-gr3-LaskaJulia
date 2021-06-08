/*Napisz funkcjê, która otrzymuje w argumencie napis i podmienia w nim wszystkie ma³e litery na du¿e litery.
Zak³adamy, ¿e napis przechowywany jest w tablicy o elementach typu char, sk³ada siê wy³¹cznie z liter ³aciñskich i bia³ych znaków,
oraz ¿e system ,na którym jest kompilowany i uruchamiany program, u¿ywa standardowego kodowania ASCII.*/


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
