#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d",&n);

    int i;
    int j;
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
            printf("%d\n",i);

    }

    if(i<2)
        printf("mniejsze niz 2 nie sa pierwsze");
    else
        for(j=1;j*j<=i;j++)
        {
            if((i%j==0))
               printf("%d nie jest pierwsza", j);
            printf("%d\n",i);

        }






    return 0;
}
