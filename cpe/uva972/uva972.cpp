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
        float ans=max(f[0], g[0]);///�ѻڽu,�s�̤p��
        while(1){///�o�Ӱj��,�O���D����
            float h = max(f[fI], g[gI]);///�ѻڽu
            if(h<ans) ans=h;

            float fNext = fNow + fL[fI] ;
            float gNext = gNow + gL[gI] ;
            ///�ӤW���,�M�w���@�U�O fI++ or gI++
            if(fNext<gNext){
                fNow = fNext;
                fI++;///�]��fNext����u,�i�H��W�@�h��
            }else if(gNext<fNext){
                gNow = gNext;
                gI++;
            }else{///�@�ˮ�,�@�_���U�@�B
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
