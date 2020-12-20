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
        ///瞷秨﹍秆肈
        ///狦и稱璶тΤ⊿Τ计玻ネ N, êê计﹚ゑN
        ///because: digitSum is 计ans + –计 => N, ans<N
        int ans=0;
        for(int i=0; i<=N; i++){
            if( digitSum(i) == N){
                ans=i; break;
            }
        }
        printf("%d\n", ans);
    }
}
