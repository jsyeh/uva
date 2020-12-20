///Q1: Recursion vs. Loop+stack/array
///Q2: �d��: �|����Warray�d��
///Q3: Recursion ���̤j�h�ƬO�X�h
#include <stdio.h>
int ans[10010]={};
int test(int n)
{
    if(n==1) return 1;
    if(n%2==1) return test(3*n+1)+1;
    else return test(n/2)+1;
}
int main()
{
    for(int i=1;i<=10000;i++){
        ans[i] = test(i);
    }
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        int small=a, big=b;
        if(a>b){small=b; big=a;}
        int max=0;
        for(int i=small;i<=big;i++){
            int now = ans[i];
            if(now>max) max=now;
        }
        printf("%d %d %d\n", a, b, max);
    }
}
