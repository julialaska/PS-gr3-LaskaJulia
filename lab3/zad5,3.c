#include<stdio.h>
#include<stdlib.h>

int porownaj(const char*nap, const char*nap2)
{
    int i =0;
    while (nap[i]!=0)
    {
        if(nap[i]!=nap2[i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    char nap[]="kot";
    size_t n = sizeof(nap)/sizeof(char);
    printf("dlugosc nap %ld\n", n);

    char nap2[]="koot";
    size_t m = sizeof(nap2)/sizeof(char);
    printf("dlugosc nap %ld\n", m);

    if(n == m)
    {
        if(porownaj(nap,nap2))
        {
            printf("napisy sa takie same\n");
        }
        else
        {
            printf("napisy sa rozne\n");
        }
    }
    else
    {
        printf("napisy sa rozne\n");
    }



    return 0;
}
