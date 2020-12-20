#include <stdio.h>///2^20還可以算 2^10=1024, 1024*1024可算
///int a[10000];///數字太多,不能用暴力 2^100000 太大
int Possible[10000][100];///Possible[Level][餘數]
///觀察規則: (好像沒有規則...
///Idea: 除法,整除 %K ==0 每個數字,可能有
int main()
{
    int M;
    scanf("%d", &M);
    for(int t=0; t<M; t++){
        int N,K;
        scanf("%d %d", &N, &K);
        ///清array
        for(int Level=0; Level<N; Level++){
            for(int mod=0; mod<K; mod++){
                Possible[Level][mod]=0;///清空白白的
            }
        }
        int now;
        scanf("%d", &now);///第0層
        Possible[0][now%K]=1;///塗黑
        for(int Level=1; Level<N; Level++){///第1層之後
            scanf("%d", &now);
            for(int mod=0; mod<K; mod++){
                if( Possible[Level-1][mod]==1 ){///前一層有塗黑
                    Possible[Level][(mod+now)%K]=1;///左邊
                    Possible[Level][(mod-now)%K]=1;///右邊
                }
            }
        }
        if( Possible[N-1][0]==1 )  printf("Divisible\n");     /// ???? 能不能被 K 整除
        else printf("Not divisible\n");
    }
    return 0;
}
