#include <stdio.h>
int ans[510][1150];/// '\0' is end of string
int solved[510]={};
void bigMultiply(int k)
{
    ///ans[k] = ans[k-1] * k 用大數乘法  (ex. ans[k][0]是個位嗎? 還是最高位?
    ///為了計算方便,決定 ans[k][0]是個位, ans[k][1]是十位, ans[k][2]是百位...
    ///ex. 1!=1, 2!=2, 3!=6, 4!=24 (會記成 42), 10!=3628800, 記成 0088263 '-1'
//    ans[1][0]=1; ans[1][1]=-1; solved[1]=1;
//    ans[2][0]=2; ans[2][1]=-1; solved[2]=1;
//    ans[3][0]=6; ans[3][1]=-1; solved[3]=1;
//    ans[4][0]=4; ans[4][1]=2; ans[4][2]=-1; solved[4]=1;
//    ans[5][0]=0; ans[5][1]=2; ans[5][2]=1; ans[5][3]=-1; solved[5]=1;

    int carry=0;
    int theNumber=k;
    for(int i=0; theNumber>0 ; i++){///ex. k=500, i=0 表示個位數, i對應現在的整數
        int now=theNumber%10;
        int j;
        for(j=0; ans[k-1][j]!= -1; j++){///ex. 10! = 3628800 ans[10] 是 0088263 (-1...), j對應ans的每一位
            if(ans[k][j+i]==-1) ans[k][j+i] = ans[k-1][j] * now + carry;
            else ans[k][j+i] = ans[k][j+i] + ans[k-1][j] * now + carry;
            carry=0;
            if(ans[k][j+i]>=10) {carry=ans[k][j+i]/10; ans[k][j+i]%=10; }
        }
        if(carry>0) {ans[k][j+i]= carry; carry=0;}
        theNumber = theNumber/10;
    }
}
void myPrintAns(int n)
{
    for(int i=0;     ; i++){
        if(ans[n][i]==-1){
            for(int k=i-1; k>=0; k--){
                printf("%d", ans[n][k]);
            }
            printf("\n");
            break;
        }
    }
}
int main()
{/// 500!   500! 500! 重覆很多次,只有第一次要真的算, 其他可以查 ans[500]
    int n;
    for(int i=0;i<510;i++){
        solved[i]=0;///not solved!
        for(int j=0;j<1150;j++){
            ans[i][j]=-1;
        }
    }
    ans[1][0]=1; ans[1][1]=-1; solved[1]=1;
    ans[2][0]=2; ans[2][1]=-1; solved[2]=1;
    ans[3][0]=6; ans[3][1]=-1; solved[3]=1;
    ans[4][0]=4; ans[4][1]=2; ans[4][2]=-1; solved[4]=1;
    ans[5][0]=0; ans[5][1]=2; ans[5][2]=1; ans[5][3]=-1; solved[5]=1;

    while(scanf("%d", &n)==1){///ex. n=500
        for(int i=n; i>=0; i--){///500,499,498..看看誰有答案
            if(solved[i]==1){///一旦發現 solved[49]有答案, 等一下 i=49開始 50,51,... 500都算一次
                ///find solution from here
                for(int k=i+1; k<=n; k++){
                    ///ans[k] from ans[k-1];
                    bigMultiply(k);
                    solved[k]=1;
                }
                break;
            }
        }
        printf("%d!\n", n);
        ///printf("%s\n", ans[n]);
        myPrintAns(n);
    }
}
