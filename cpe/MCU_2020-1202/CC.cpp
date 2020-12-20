#include <stdio.h>
int a[1000], n;///Step02: array
int abs(int n)
{///Step06 回傳正的
    if(n>0) return n;///正
    else return -n;///負負得正
}
int findAns(int q)
{///Step05:請 findAns(q)找答案
    int closest=999999999, ans=0;
    for(int i=0; i<n; i++){///Step04: 暴力,看誰最接近q
        for(int j=i+1; j<n; j++){
            int now = abs(a[i]+a[j] - q);
            if( now < closest ){
                closest = now;///找最接近
                ans = a[i]+a[j];///
            }
        }
    }
    return ans;
}
int main()
{///Step01: Input
    int t=1;///Step08
    while( scanf("%d",&n)==1 ){
        if(n==0) break;

        for(int i=0; i<n; i++){
            scanf("%d", &a[i] );
        }///Step02
        printf("Case %d:\n", t);///Step08
        int m, q;
        scanf("%d",&m);
        for(int i=0; i<m; i++){///Step03: Query問,主迴圈
            scanf("%d", &q);///問
            int ans=findAns(q);///Step04: 暴力,看誰最接近q
            printf("Closest sum to %d is %d\n", q, ans);///Step05:請 findAns(q)找答案
        }
        t++;///Step08
    }
}
