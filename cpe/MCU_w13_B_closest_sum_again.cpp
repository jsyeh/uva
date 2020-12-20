#include <stdio.h>///18:41完成
int a[1000], a2[1000000];///18:37暴力法需要的memory太多了,真的嗎?
int n, m, n2, q, t=1;
int calc_dist(int a, int b)
{
    int ans=a-b;
    if(ans<0) ans=b-a;
    return ans;
}
void genAll()
{
    n2=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a2[n2]=a[i]+a[j];
            n2++;
        }
    }
}
int find_closest_a2(int q)
{
    int ans=a2[0], dist=calc_dist(q, a2[0] );
    for(int i=0;i<n2;i++){
        int now=calc_dist(q, a2[i]);
        if(now<dist){
            dist=now;
            ans=a2[i];
        }
    }
    return ans;
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
        genAll();

        for(int i=0; i<m; i++){
            scanf("%d", &q);
            int ans = find_closest_a2(q);
            printf("Closest sum to %d is %d.\n", q, ans);
        }
        t++;
    }
}
