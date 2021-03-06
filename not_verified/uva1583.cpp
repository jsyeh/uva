#include <stdio.h>
int digitSum(int n)
{
    int ans=n;
    while(n>0){
        ans += n%10;
        n = n/10;
    }
    return ans;
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0;t<T;t++){
        int N;
        scanf("%d", &N);
        ///現在開始解題
        ///如果我想要找到有沒有數字可以產生 N, 那那個數字一定比N小
        ///because: digitSum is 數字ans + 每一位數 => N, ans<N
        int ans=0;
        for(int i=0; i<=N; i++){
            if( digitSum(i) == N){
                ans=i; break;
            }
        }
        printf("%d\n", ans);
    }
}
