//18:08-18:17 arc OK, 18:19 chord OK
#include <stdio.h>
#include <string.h>
#include <math.h>
//double PI=3.141592
int main()
{
    int s, a, r=6440;
    double arc, chord, angle;
    char str[10];
    while( scanf("%d %d %s",&s,&a, &str)==3 ){
        if(strcmp(str,"min")==0){
            angle = a/180.0/60.0;
        }else{
            angle = a/180.0;
        }
        arc=M_PI*(r+s)*angle;
        chord = (r+s)*sin(angle*M_PI/2)*2;
        printf("%.6f %.6f\n", arc, chord);
    }
}
