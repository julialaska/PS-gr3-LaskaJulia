#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int a1, b1, c1, a2, b2, c2;
     int W, Wx, Wy, x, y;
    printf( "Aby obliczyc uklad rownan postaci: \n"
    "a1x + b1y = c1 \n"
    "a2x + b2y = c2 \n"
    "Podaj wspolczynniki a1, b1, c1, a2, b2, c2: " );

    scanf( "%d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2);


    W = (a1 * b2) - (b1 * a2);
    Wx = (c1 * b2) - (b1 * c2);
    Wy = (a1 * c2) - (c1 * a2);

    if( W != 0 )
    {
        x = Wx / W;
        y = Wy / W;
        printf( "x = %d, y = %d", x, y );
    }
    else

        if( Wx == 0 && Wy == 0 ) printf( "Uklad ma nieskonczenie wiele rozwiazan!" );

              else
                   printf( "Uklad nie ma rozwiazan!" );


    return 0;

}
