#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d",&n);

    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            printf("%d\n",i);
    }



    return 0;
}
