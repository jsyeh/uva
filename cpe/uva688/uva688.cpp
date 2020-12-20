#include <stdio.h>
int grid[220][220]={};
int x[110],y[110],r[110];///raw old input data
double xValue[220], yValue[220];
double newValue[220];
int xI[220], yI[220];
int N;
void show();
void mySolve(int T)
{
    ///Copy
    for(int i=0;i<N;i++){
        xValue[i*2] = x[i]-r[i]; xValue[i*2+1] = x[i]+r[i];
        yValue[i*2] = y[i]-r[i]; yValue[i*2+1] = y[i]+r[i];
        xI[i*2]=i*2; xI[i*2+1]=i*2+1;
        yI[i*2]=i*2; yI[i*2+1]=i*2+1;
    }
    //show();
    ///Sort
    for(int i=0;i<N*2;i++){
        for(int j=i+1;j<N*2;j++){
            if(xValue[i]>xValue[j]){
                int temp=xValue[i]; xValue[i]=xValue[j]; xValue[j]=temp;
                temp=xI[i]; xI[i]=xI[j]; xI[j]=temp;
            }
            if(yValue[i]>yValue[j]){
                int temp=yValue[i]; yValue[i]=yValue[j]; yValue[j]=temp;
                temp=yI[i]; yI[i]=yI[j]; yI[j]=temp;
            }
        }
    }
    //show();
    ///Make table
    for(int i=0;i<N*2;i++){
        newValue [ xI[i] ] = i;
    }
    for(int i=0;i<N*2;i++){
        //printf("=%.0f ", newValue[i]);
    }

    ///Count Area
    for(int i=0;i<N;i++){
        int x0=newValue[i*2], x1=newValue[i*2+1];
        int y0=newValue[i*2], y1=newValue[i*2+1];
        for(int ix= x0; ix<x1; ix++ ){
            for(int iy=y0; iy<y1; iy++){
                grid[ix][iy]=1;
            }
        }
    }

    double area=0;
    for(int iy=N*2-1;iy>=0;iy--){
        for(int ix=0;ix<N*2;ix++){
            //printf("%2d ", grid[ix][iy]);
            if(grid[ix][iy]==1) area+= (xValue[ix+1]-xValue[ix] )*( yValue[iy+1]-yValue[iy]  );
        }
        //printf("\n");
    }
    printf("%d %.2f\n", T, area/100.0);
}
int main()
{
    int T=1;
    while(scanf("%d", &N)==1){
        if(N==0)break;
        /// 100
        /// 200.0 200.0 200.0
        for(int ix=0;ix<110;ix++){
            for(int iy=0;iy<110;iy++){
                grid[ix][iy]=0;
            }
        }
        for(int i=0;i<N;i++){
            double x2,y2,r2;
            scanf("%lf %lf %lf",&x2,&y2,&r2);
            x[i]=x2*10; y[i]=y2*10; r[i]=r2*10;///backup with integer value
        }

        mySolve(T++);
    }
}
void show()
{
    for(int i=0;i<N;i++){
        printf("%.1f %.1f ", xValue[i*2], xValue[i*2+1]);
    }
    printf("\n");
    for(int i=0;i<N;i++){
        printf("%d %d ", xI[i*2], xI[i*2+1]);
    }
    printf("\n");
}
