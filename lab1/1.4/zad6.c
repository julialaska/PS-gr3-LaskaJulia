#include <stdio.h>

int main()
{
    int n=0,p=0,w=1;
    printf("podaj n>2\n");
    while(n<=2)
    {
    scanf("%d",&n);
    }
    for(int i=2;i<=n;i+=2)
    {
        w*=i;
    }
    printf("%d",w);
    return 0;

}
