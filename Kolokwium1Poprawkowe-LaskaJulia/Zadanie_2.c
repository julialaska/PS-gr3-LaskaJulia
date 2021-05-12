#include<stdio.h>
#include<stdlib.h>

double najwieksza(double x, double y, double z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>x && y>z)
    {
        return y;
    }
    else
    {
        return z;
    }

}
int main()
{
    double x, y, z;
    printf("podaj x, y, z \n");
    scanf("%lf %lf %lf",&x,&y,&z);

    printf("%lf",najwieksza(x,y,z));

    return 0;
}
