#include<stdio.h>
#include<stdlib.h>

int porownaj(char *nap1, char *nap2)
{
    int i;
    for(i=0;(nap1[i]!=0)&&(nap2[i]!=0);i++)
        if(nap1[i]!=nap2[i])
            return (nap1[i]<nap2[i])?1:0;
    if(nap1[i]!=0)
        return 0;
    else
        return 1;
}

int main()
{
    char nap[]="kot";
    char nap2[]="kot";

    printf("%d", porownaj(nap,nap2));
    return 0;
}
