#include <stdio.h>
int a[200];
int sum[20002];///�p�G 3+4, �N�� sum[7]++
int main()
{
    int N, t=1;
    while( scanf("%d", &N)==1 ){
        for(int i=0; i<N; i++){
            scanf("%d", &a[i]);
        }
        ///���U�ӸѨM
        for(int i=0;i<20002;i++) sum[i]=0;
        int bad=0;
        for(int i=0; i<N; i++){
            for(int j=i; j<N; j++){
                int now=a[i]+a[j];
                sum[now]++;
                if(sum[now]>1){
                    bad=1;
                }
            }
        }
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n", t);
        else printf("Case #%d: It is not a B2-Sequence.\n", t);
        t++;
    }
}
