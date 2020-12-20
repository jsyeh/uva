///18:25-18:27
#include <stdio.h>
int main()
{
    int T, a, b;
    scanf("%d", &T);
    for(int t=1;t<=T;t++){
        int ans=0;
        scanf("%d%d", &a, &b);
        for(int i=a; i<=b; i++){
            if(i%2==1) ans+=i;
        }
        printf("Case %d: %d\n", t, ans);
    }
}
