#include <stdio.h>
int f(int n)
{
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int g(int n)
{
    while(n>=10){
        n=f(n);
    }
    return n;
}
int main()
{
    int n;
    while(scanf("%d", &n)==1){
        if(n==0)break;
        int ans=g(n);
        printf("%d\n", ans);
    }
}
