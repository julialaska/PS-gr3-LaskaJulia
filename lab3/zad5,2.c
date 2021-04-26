#include<stdio.h>
#include<stdlib.h>

int dlugosc(char *nap)
{
    int i=0;
    while(nap[i]!=0)
        i++;

    return i;
}

int main()
{
    char napis[] = "anakonda";
    printf("%d", dlugosc(napis));
    return 0;
}
