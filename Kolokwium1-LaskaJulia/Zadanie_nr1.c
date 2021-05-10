#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool czyPierwsza(int liczba)
{
    for (int j = 2; j < liczba; j++)
    {
        if (liczba % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    printf("Podaj n\n");
    scanf("%d",&n);

    int ile_pierw = 0;
    int i;
    for(i=1; i<=n; i++)
    {
        if(n%i == 0)
            {
                if(czyPierwsza(i) == true && i != 1)
                {
                    printf("dzielnik %d\n",i);
                    ile_pierw++;
                }
            }
    }

    printf("razem dzielnikow %d",ile_pierw);

    return 0;
}
