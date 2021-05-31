#include<stdio.h>
#include<stdlib.h>
#include "point.h"

typedef struct LineSegment{
    Point a;
    Point b;
    } LineSegment;


//struct LineSegment{
    //#Point a;
    //Point b;
    //};

//typedef struct LineSegment;

LineSegment makeLineSegment(int ax, int ay, int bx, int by)
{
    //int ax = Point(a.x)
    int ax = a.x;
    int ax = LineSegment.a.x;
    int ay = LineSegment.a.y;
    int bx = LineSegment.b.x;
    int by = LineSegment.b.y;
}
bool parallel(const LineSegment*s1,const LineSegment*s2)
{
    if (ax == ay)
        return 1;
    return 0;
}
bool perpendicular(const Segment*s1,const LineSegment*s2)
{
    if(ax*ay == -1)
        return 1;
    return 0;
}

double length(const LineSegment*s)
{
    double dl_1 =
}

LineSegment makeLineSegmentfromPoints(constPoint*a,constPoint*b)
{

}
void show(constLineSegment*s)
{
    printf("<%d, %d>", a.x, a.y);
}
