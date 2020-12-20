#include <stdio.h>
float f[200], g[200];
float fL[200], gL[200];///for fNow,gNow
int fN, gN;///for fI, gI
float max(float a, float b){
    if(a>b) return a;
    else return b;
}
int main()
{
    int n;
    while(scanf("%d", &fN)==1){
        for(int i=0;i<fN;i++){
            scanf("%f %f", &f[i], &fL[i]);
        }
        scanf("%d", &gN);
        for(int i=0;i<gN;i++){
            scanf("%f %f", &g[i], &gL[i]);
        }
        float fNow=0, gNow=0;
        int fI=0, gI=0;
        float ans=max(f[0], g[0]);///天際線,存最小值
        while(1){///這個迴圈,是解題關鍵
            float h = max(f[fI], g[gI]);///天際線
            if(h<ans) ans=h;

            float fNext = fNow + fL[fI] ;
            float gNext = gNow + gL[gI] ;
            ///樓上兩個,決定等一下是 fI++ or gI++
            if(fNext<gNext){
                fNow = fNext;
                fI++;///因為fNext比較短,可以更上一層樓
            }else if(gNext<fNext){
                gNow = gNext;
                gI++;
            }else{///一樣時,一起走下一步
                fNow = fNext;
                gNow = gNext;
                fI++;
                gI++;
            }
            if(gI>=gN || fI>=fN) break;
        }
        printf("%.3f\n", ans);
    }
}
