#include <stdio.h>
int p(int x, int y)
{
    int ans=0;
    for(int i=0; i<=x+y; i++){
        ans+=i;
    }
    ans+=x;
    return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        int x1,y1, x2,y2;
        scanf("%d%d%d%d", &x1,&y1, &x2,&y2);
        int p1=p(x1,y1);
        int p2=p(x2,y2);
        int ans=p2-p1;
        printf("Case %d: %d\n", t, ans);
    }
}
