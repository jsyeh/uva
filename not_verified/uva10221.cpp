#include <stdio.h>
#include <math.h>
#include <string.h>
char line[10];///min or deg
double PI=3.1415926535;
int main()
{
    double angle;
    int s, a;///r �O km ����, 6440 km ��O����
    while( scanf("%d %d %s", &s, &a, line)==3){
        if(strcmp(line, "deg")==0){
            angle = a*PI/180.0;
        }else{
            angle = a*PI/180.0/60.0;
        }

        int realR=s+6440;///�u���b�|

        double ans1= angle*realR; ///��P(���׬O2PI): 2*PI*r,  ����: angle*r


        double x1=realR*cos(angle), y1=realR*sin(angle);
        double x0=realR*cos(0), y0=realR*sin(0);
        double dx=x1-x0, dy=y1-y0;
        double ans2= sqrt( dx*dx + dy*dy );
        printf("%.6f %.6f\n", ans1, ans2);
    }
}
