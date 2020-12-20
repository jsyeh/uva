#include <stdio.h>
int a[10001];
int main()
{
    int N,Q, T=1;;
    while( scanf("%d%d", &N, &Q)==2 ){
        if(N==0&&Q==0)break;
        printf("Case #%d:\n", T++);
        for(int i=0;i<=10000;i++) a[i]=0;
        int now;
        for(int i=0;i<N;i++){
            scanf("%d", &now);
            a[now]++;
        }
        for(int i=0;i<Q;i++){
            scanf("%d", &now);
            if(a[now]==0){
                printf("%d not found\n", now);
                continue;
            }
            int ans=0;
            for(int k=0;k<now;k++){
                ans+=a[k];
            }
            printf("%d found at %d\n", now, ans+1);
        }
    }
}
