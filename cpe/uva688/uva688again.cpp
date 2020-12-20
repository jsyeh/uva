#include <stdio.h>
int N;
float xValue[220], yValue[220];
int xIndex[220], yIndex[220];
int newXValue[220], newYValue[220];
int grid[220][220];
int main()
{
    int T=1;
    while(scanf("%d", &N)==1){
        if(N==0)break;
        for(int i=0;i<N;i++){
            float x,y,r;
            scanf("%f %f %f", &x, &y, &r);
            xValue[i*2]=x-r; xValue[i*2+1]=x+r;
            yValue[i*2]=y-r; yValue[i*2+1]=y+r;
        }
        for(int i=0;i<N*2;i++){
            xIndex[i]=i; yIndex[i]=i;
        }
        for(int i=0;i<N*2;i++){
            for(int j=i+1;j<N*2;j++){
                if(xValue[ xIndex[i] ] > xValue[ xIndex[j] ]){
                    int temp=xIndex[i]; xIndex[i]=xIndex[j]; xIndex[j]=temp;
                }
                if(yValue[ yIndex[i] ] > yValue[ yIndex[j] ]){
                    int temp=yIndex[i]; yIndex[i]=yIndex[j]; yIndex[j]=temp;
                }
            }
        }
        for(int i=0;i<N*2;i++){
            newXValue[ xIndex[i] ] = i;
            newYValue[ yIndex[i] ] = i;
        }
//        for(int i=0;i<N*2;i++){
//            printf("%.1f %d - %d\n", xValue[xIndex[i]], xIndex[i], newXValue[i]);
//        }

        for(int ix=0;ix<N*2;ix++){
            for(int iy=0;iy<N*2;iy++){
                grid[ix][iy]=0;
            }
        }
        for(int i=0;i<N;i++){
            int x0=newXValue[ i*2 ], x1= newXValue[ i*2+1 ];
            int y0=newYValue[ i*2 ], y1= newYValue[ i*2+1 ];
            //printf("%d %d - %d %d\n", x0,x1,y0,y1);
            for(int ix=x0;ix<x1;ix++){
                for(int iy=y0;iy<y1;iy++){
                    grid[ix][iy]=1;
                }
            }
        }

//        for(int iy=N*2-1;iy>=0;iy--){
//            for(int ix=0;ix<N*2;ix++){
//                printf("%2d", grid[ix][iy]);
//            }
//            printf("\n");
//        }

        float area=0;
        for(int ix=0;ix<N*2;ix++){
            for(int iy=0;iy<N*2;iy++){
                if(grid[ix][iy]==1)area+= (xValue[ xIndex[ix+1] ] - xValue[ xIndex[ix] ] )
                                         *(yValue[ yIndex[iy+1] ] - yValue[ yIndex[iy] ] );
            }
        }
        printf("%d %.2f\n", T, area);
        T++;
    }
}
