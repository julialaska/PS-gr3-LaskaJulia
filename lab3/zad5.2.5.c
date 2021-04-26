#include<stdio.h>
#include<stdlib.h>

void przepisz(char*nap,char*nap2)//char
{
    for(int i=0;i<sizeof(nap);i++)
    {
        nap2[i] = nap[i];
    }
                            //return nap2
}

int main()
{
    char nap[]="kot";
    char nap2[]="koot";
    printf("%s\n",nap2);


    przepisz(nap,nap2);
    printf("%s",nap2);
    return 0;
}
