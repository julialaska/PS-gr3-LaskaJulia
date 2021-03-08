#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int a=1;a<n;a++)
    {
        for(int b=1;b<n;b++)
        {
            for(int c=1;c<n;c++)
            {
                if((a*a)+(b*b)==c*c)
                    printf("%d^2+%d^2=%d^2\n",a,b,c);
            }
        }
    }
}
