#include <stdio.h>
int X[20000], Y[20000];
///1 1 2     3  5 7 8 8 9        15
///    2 2 2 3 4 6       10 11 11
///    XXXXXXX                 XX
///  V                       V
int total[300000];
int main()
{
    int a,b;
    while( scanf("%d %d", &a, &b)==2 ){
        if(a==0 && b==0) break;
        for(int i=0;i<100000;i++){
            total[i]=0;///0: empty
        }///A have i, total+=1;
        /// B have i, total+=2;
        for(int i=0; i<a; i++){
            scanf("%d", &X[i]);
            int now=X[i];
            if(total[now]==0) total[now]=1;
        }
        for(int i=0; i<b; i++){
            scanf("%d", &Y[i]);
            int now=Y[i];
            if(total[now]==0 || total[now]==1) total[now]+=2;
        }
        ///現在才要開始解題
        int maxA=0, maxB=0;///有獨特卡牌數量
        for(int i=0;i<100000;i++){
            if(total[i]==1) maxA++;
            if(total[i]==2) maxB++;
        }
        ///printf("maxA: %d maxB: %d\n", maxA, maxB);
        int ans=0;
        if(maxA<maxB) ans=maxA;
        else ans=maxB;
        printf("%d\n", ans);
    }
}
