#include<stdio.h>
#include<stdlib.h>

char *kopiuj(char*nap1, const char*nap2)
{
    int i;
    for(i=0;nap2[i];i++)
    {
        nap1[i] = nap2[i];
    }
    nap1[i]=0;
    return nap1;
}



int main()
{
    char nap1[] = "pies";
    char nap2[]="kot";


    printf("%s\n",nap1);



    printf("%s",kopiuj(nap1,nap2));
    return 0;
}
