#include <stdio.h>
int ans[510][1150];
int len[510];
int solved[510]={};
void myMultiply(int n)
{
    int theNumber=n;
    int carry=0;
    int i,j;
    for(i=0; theNumber>0; i++){
        int now = theNumber%10;
        for(j=0;j<len[n-1];j++){
            ans[n][i+j] += now*ans[n-1][j]+carry;
            carry=0;
            if(len[n]<i+j+1) len[n]=i+j+1;
            if(ans[n][i+j]>=10){ carry=ans[n][i+j]/10; ans[n][i+j]%=10;}
        }
        theNumber /= 10;
        len[n]=i+j;
        if(carry>0){
            ans[n][i+j]+=carry;
            carry=0;
            if(len[n]<i+j+1) len[n]=i+j+1;
        }
    }
}
void myPrintAns(int n)
{
    if(solved[n]==0){
        int k;
        for(k=n; k>=0; k--){
            if(solved[k]==1)break;
        }
        for(int i=k+1;i<=n;i++){
            myMultiply(i);
            solved[i]=1;
        }
    }
    for(int i=len[n]-1;i>=0;i--){
        printf("%d", ans[n][i]);
    }
    printf("\n");
}
int main()
{
    int n;
    for(int i=0;i<510;i++){
        len[i]=0; solved[i]=0;
        for(int j=0;j<1150;j++){
            ans[i][j]=0;
        }
    }
    ans[1][0]=1; len[1]=1; solved[1]=1;

    while(scanf("%d", &n)==1){
        printf("%d!\n", n);
        myPrintAns(n);
    }
}
