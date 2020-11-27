#include <stdio.h>
typedef struct point{
    int x;
    int y;
} point;
short func ( point *, int l, double, double);
int main() {
    point mas[3] = {{0.4,0.4},{-0.5,-0.5},{1,1}};

     int t = func(mas,3,1,1);
    printf(" t =%d",t );
    return 0;
}
short func ( point *st, int len, double a, double b)
{ int c1= 0,c2=0,c3=0;

    for(int i=0; i<len; i++) {
        if (st[i].x < a/2 && st[i].x >- a/2 || st[i].y > -b/2 && st[i].y < b/2) c1++;
         else if (st[i].x > a/2 && st[i].x <- a/2 || st[i].y > b/2 && st[i].y < -b/2) c2++;
           else c3++;
        if(c1>0) return -1;
         else if (c2 >0)return 1;
         else return 0;
    }
}
