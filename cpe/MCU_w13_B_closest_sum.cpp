#include <stdio.h>
int a[1000];
int n, m, q, t=1;
int calc_dist(int a, int b)
{
    int ans=a-b;
    if(ans<0) ans=b-a;
    return ans;
}
int find_closest_two(int q)
{
    int ans1=a[0], ans2=-1;
    int dist1=calc_dist(q,a[0]), dist2=-1;
    for(int i=1; i<n; i++){
        int now=calc_dist(q,a[i]);
        if(now<dist1){
            dist2=dist1;
            dist1=now;
            ans2=ans1;
            ans1=a[i];
        }else if(dist2==-1){
            dist2=now;
            ans2=a[i];
        }else if(now<dist2){
            dist2=now;
            ans2=a[i];
        }
    }
    ///printf("===%d===%d===\n", ans1,ans2); 18:33我搞錯題目了...
    ///要暴力法,去試全部的可能嗎? 1000,000
    return ans1+ans2;
}
int main()
{
    while( scanf("%d", &n)==1 ){
        if(n==0)break;
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        printf("Case %d:\n", t);
        scanf("%d", &m);
        for(int i=0; i<m; i++){
            scanf("%d", &q);
            int ans = find_closest_two(q);
            printf("Closest sum to %d is %d.\n", q, ans);
        }
        t++;
    }
}
