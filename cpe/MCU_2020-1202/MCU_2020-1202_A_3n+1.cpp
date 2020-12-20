#include <stdio.h>
/*int cycles(int n)
{
    if(n==0) return 1;
    if(n%2==1)return cycles(3*n+1)+1;
    else return cycles(n/2)+1;
}*/
int cycles(int n)
{
    int ans=1;
    while(n!=1){
        if(n%2==1) n=3*n+1;
        else n=n/2;
        ans++;
    }
    return ans;
}
int main()
{
    int a, b;
    while( scanf("%d%d",&a,&b)==2 ){
        printf("%d %d ", a, b);
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        int max=0;
        for(int i=a; i<=b; i++){
            int now=cycles(i);
            if(now>max)max=now;
        }
        printf("%d\n", max );
    }
}
