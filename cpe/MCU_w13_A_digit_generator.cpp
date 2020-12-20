#include <stdio.h>
int gen(int N)
{
    int ans=N;
    while(N>0){
        ans+=N%10;
        N/=10;
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        int N;
        scanf("%d", &N);
        int i;
        int ans=0;
        for(int i=1; i<=N; i++){
            if( gen(i)==N ){
                ans=i;
                break;
            }
        }
        printf("%d\n", ans);
    }
}
