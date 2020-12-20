#include <stdio.h>
int find_steps(int x, int y)
{
    int level=x+y;
    int ans= level*(level+1)/2;
    return ans+x;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        int a,b,c,d;
        scanf("%d %d %d %d", &a,&b,&c,&d);
        int step1= find_steps(a,b);
        int step2= find_steps(c,d);
        int ans=step2-step1;
        printf("Case %d: %d\n", t, ans);
    }
}
