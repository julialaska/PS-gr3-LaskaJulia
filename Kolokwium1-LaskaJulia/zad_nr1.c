#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d",&n);

    int i;
    int j;
    int suma_pierw=0;
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)//dzielniki
            {
            for(j=2;j<i;j++)
            {
                if((i%j==0))
                    printf(" nie jest pierwsza %d\n", i);
                suma_pierw++;
            }
            }
        else
            printf("nie jest dzielnikiem");
    }




printf("%d",suma_pierw);



    return 0;
}
