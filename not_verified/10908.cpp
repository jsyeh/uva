/// 21 T, 21 Q, 100*100,
#include <stdio.h>
char grid[200][200]={};
int M,N,Q;
int testBad(int now, int r, int c,int ans)
{
    int half=ans/2;
    if(r-half<0 || c-half<0 || r+half>M || c+half>N){
        return 1;///bad
    }
    for(int i=r-half; i<=r+half;i++){
        if(now!=grid[i][c-half])return 1;
        if(now!=grid[i][c+half])return 1;
    }
    for(int j=c-half;j<=c+half;j++){
        if(now!=grid[r-half][j])return 1;
        if(now!=grid[r+half][j])return 1;
    }
    return 0;///not bad
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0;t<T;t++){
        scanf("%d%d%d",&M,&N,&Q);
        printf("%d %d %d\n",M,N,Q);
        for(int i=0;i<M;i++){
            scanf("%s", grid[i+1]+1);///
        }
        int r,c;
        for(int i=0;i<Q;i++){
            scanf("%d %d", &r,&c);
            int now=grid[r+1][c+1];
            int ans=1;
            for(int ans=1;ans<=101;ans+=2){
                int bad=testBad(now,r+1,c+1,ans);
                if(bad==1){
                    printf("%d\n", ans-2);
                    break;
                }
            }
        }
    }
}
