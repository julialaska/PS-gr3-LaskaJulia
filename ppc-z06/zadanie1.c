#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

bool czyPierwsza(int i)
{
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
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

    printf("%d", czyPierwsza(n));

    return 0;
}
