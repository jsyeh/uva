//18:19-18:29 ans[i] 數字對, 但對應 text[i]出錯 18:32 OK
#include <stdio.h>
char text[4][20]={"kuti", "lakh", "hajar", "shata"};
//long long int number[4]={10000000,100000,1000,100};
long long int number[4]={100,100,10,100};///有換算一下,與下一位的差
int main()
{
    long long int input;
    int t=1;
    int ans[10];
    while( scanf("%lld", &input)==1 ){
        printf("%4d.", t);
        int N=0;
        for(int i=0; input>0; i++){
            int now=3-i%4;
            ans[i]=input% number[now];
            input/=number[now];
            N++;
        }
        for(int i=N-1; i>=0; i--){
            int now=(3-(i)%4+1)%4;
            if(i==0) printf(" %d\n", ans[i]);
            else printf(" %d %s", ans[i], text[now]);
        }
        t++;
    }
}
