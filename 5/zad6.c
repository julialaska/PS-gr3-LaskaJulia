<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>


char *kopiujn(const char*nap, char*nap2, int n)
{
    for(int i=0; i < n; i++)
    {
        nap2[i] = nap[i];
    }
    return nap2;
}

int main()
{
    char nap[]="anakonda";
    char nap2[365]="boa";
    int n;
    printf("podaj n ");
    scanf("%d",&n);

    printf("%s\n",nap2);



    printf("%s\n",kopiujn(nap,nap2,n));
    return 0;
}
=======
#include<stdio.h>
#include<stdlib.h>


char *kopiujn(const char*nap, char*nap2, int n)
{
    for(int i=0; i < n; i++)
    {
        nap2[i] = nap[i];
    }
    return nap2;
}

int main()
{
    char nap[]="anakonda";
    char nap2[365]="boa";
    int n;
    printf("podaj n ");
    scanf("%d",&n);

    printf("%s\n",nap2);



    printf("%s\n",kopiujn(nap,nap2,n));
    return 0;
}
>>>>>>> fa4329af89fcf22f06d1141b3bf66e909d2a782a
