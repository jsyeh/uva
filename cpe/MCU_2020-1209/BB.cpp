#include <stdio.h>
#include <string.h>///strcmp()
#include <math.h>/// M_PI
int main()
{
    int s, a;
    char line[10];
    while( scanf("%d%d%s",&s,&a,line)==3 ){
        double angle;
        if( strcmp(line,"min")==0 ){
            angle = a/60.0; ///算出角度的度
        }else{
            angle = a;///度
        }
        double arc= (s+6440)*angle/180*M_PI;
        double chord=(s+6440)*sin(angle/2/180*M_PI) *2;
        printf("%.6f %.6f\n", arc, chord);
    }
}
