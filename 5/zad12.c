#include<stdio.h>
#include<stdlib.h>

void wytnijzn(char*nap1, char*nap2)
{
    int i, j;
    int wyst[256]={};
    for(i=0; nap2[i]!=0; i++)
    {
        wyst[nap2[i]]=1;
    }
    for(i=0,j=0; nap1[i]!=0; i++)
        if(wyst[nap1[i]]!=0)
        {
            if(j<i)
                nap1[j]=nap1[i];
            i++;
        }
    nap1[j]=0;
}

int main()
{
    char nap1[365] = "kwiat";
    char nap2[365] = "paproc";
    printf("%s", nap1);

    wytnijzw(nap1,nap2);
    printf("%s", nap1);

    return 0;
}
