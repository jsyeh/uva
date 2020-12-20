#include <stdio.h>
int a[1000], n;
int abs(int n)
{
    if(n<0) return -n;
    else return n;
}
int closestSum(int q)
{
    int closest=abs(a[0]+a[1]-q);
    int ans=a[0]+a[1];
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int now=abs( a[i]+a[j]-q );
            if(now<closest){
                closest=now;
                ans=a[i]+a[j];
            }
        }
    }
    return ans;
}
int main()
{
    int t=1, q, m;
    while( scanf("%d",&n)==1 ){
        if(n==0)break;
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        printf("Case %d:\n", t);
        scanf("%d", &m);
        for(int i=0; i<m; i++){
            scanf("%d", &q);
            int ans=closestSum(q);
            printf("Closest sum to %d is %d.\n", q, ans);
        }
        t++;
    }
}
