#include<stdio.h>
int length(int n)
{///Step04
    int ans=1;
    while(n!=1){
        if(n%2==1) n = 3*n+1;
        else n = n/2;
        ans++;///Step05 ans
    }
    return ans;
}
int main()
{
    int a, b;///Step01: Input
    while( scanf("%d%d",&a,&b)==2 ){
        int max=0;
        for(int i=a; i<=b; i++){///Step02:¥Dloop
            int now=length(i);///Step03:½ÐÀ°¦£
            if(now>max) max=now;
        }
        printf("%d %d %d\n", a, b, max);
    }
}
