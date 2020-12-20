///2020-05-06 22:51 開始看題目
///22:52 怎麼可能用DP? 是否直接用除法即可?
///或是用暴力法? 是開根號嗎?
///22:55 input OK,想一下規則
///2 3 4 5 6 7 8 9 10
///1 2 3 5
///1+1+(1or2)+
/// ex. ans[10]已知, 則 ans[11]為 ans[6]...ans[10]加1
///ans[i]=ans[i-1]
///23:03 想出來的 ans[i]從一半開始+1的方法不對
///思考 7:3 的由來: 1:0, 2:1, 4:2, 7:3
///23:05 Idea: 好像就看一半即可...
/// 7=> 7/2=3.5變4 => 4/2=2 => 2/2=1
///答案就看要除幾次, 或是反過來, 直接用倍數
///23:10解出來
#include <stdio.h>
int ans[10001];
void genAns()
{
    ans[0]=0;
    ans[1]=0;
    for(int i=2;i<10001;i++){
        if(i%2==0) ans[i]=ans[i/2]+1;
        else ans[i]=ans[i/2+1]+1;
//        int min=ans[i/2];
//        if(i%2==1) min=ans[i/2+1];
//        for(int k=i/2;k<i;k++){
//            if(ans[k]<min) min=ans[k];
//        }
//        ans[i]=min+1;
    }
//    for(int i=0;i<20;i++){
//        printf("%d:%d ", i,ans[i]);
//    }
}
int main()
{
    genAns();
    int N, t=1;
    while( scanf("%d", &N)==1){
        if(N<0)break;///只要是負的,就break;
        printf("Case %d: %d\n", t, ans[N]);
        t++;
    }
}
