
#include <stdio.h>
int grid[4010][4010]={};
int main()
{
    int n;
    int T=1;
    while(scanf("%d", &n)==1){
        //printf("n:%d\n",n);
        if(n==0)break;
        /// 100
        /// 200.0 200.0 200.0
        for(int ix=0;ix<4010;ix++){
            for(int iy=0;iy<4010;iy++){
                grid[ix][iy]=0;
            }
        }
        for(int i=0;i<n;i++){
            double x2,y2,r2;
            scanf("%lf %lf %lf",&x2,&y2,&r2);
            int x0=(x2-r2)*10, x1=(x2+r2)*10, y0=(y2-r2)*10, y1=(y2+r2)*10;
            if(x0<0)x0=0;
            if(y0<0)y0=0;
            //printf("%d %d %d %d\n", x0,x1,y0,y1);
            for(int ix=x0;ix<x1;ix++){
                for(int iy=y0;iy<y1;iy++){
                    grid[ix][iy]=1;
                }
            }
        }
        int area=0;
        for(int ix=0;ix<4010;ix++){
            for(int iy=0;iy<4010;iy++){
                if(grid[ix][iy]==1)area++;
            }
        }
        printf("%d %.2f\n", T, area/100.0);
        T++;
    }
}
