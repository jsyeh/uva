#include <stdio.h>
int ans[510][1150];
int len[510];
int solved[510];
void myMultiply(int n)
{
    int theNumber=n;
    int carry=0;
    int i,j;
    for(i=0; theNumber>0; i++){
        int now=theNumber%10;
        for(j=0;j<len[n-1];j++){
            ans[n][i+j] += now*ans[n-1][j]+carry; carry=0;
            if(ans[n][i+j]>9){carry=ans[n][i+j]/10; ans[n][i+j]%=10;}
        }
        ///如果len[n-1]是1,則現在j就是len[n-1]的位數
        if(len[n]<i+j)len[n]=i+j;
        if(carry>0){
            ans[n][i+j] += carry; carry=0;
            if(len[n]<i+j+1) len[n]=i+j+1;
        }
        theNumber/=10;
    }
}
void myPrintAns(int n)
{
    if(solved[n]==0){
        int i;
        for(i=n;i>=0;i--){
            if(solved[i]==1){
                break;///now solved[i] is OK, and i is biggest one
            }
        }
        for(int k=i+1;k<=n;k++){
            myMultiply(k);
            solved[k]=1;
        }
    }
    for(int i=len[n]-1;i>=0;i--){
        printf("%d", ans[n][i]);
    }
    printf("\n");
}
int main()
{
    for(int i=0;i<510;i++){
        for(int j=0;j<1150;j++){
            ans[i][j]=0;
        }
        len[i]=0;
        solved[i]=0;
    }
    ans[1][0]=1; len[1]=1; solved[1]=1;

    int n;
    while(scanf("%d", &n)==1){
        printf("%d!\n", n);
        myPrintAns(n);
    }
}
