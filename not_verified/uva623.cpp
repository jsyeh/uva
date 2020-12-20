#include <stdio.h>
int ans[510][1150];/// '\0' is end of string
int solved[510]={};
void bigMultiply(int k)
{
    ///ans[k] = ans[k-1] * k �Τj�ƭ��k  (ex. ans[k][0]�O�Ӧ��? �٬O�̰���?
    ///���F�p���K,�M�w ans[k][0]�O�Ӧ�, ans[k][1]�O�Q��, ans[k][2]�O�ʦ�...
    ///ex. 1!=1, 2!=2, 3!=6, 4!=24 (�|�O�� 42), 10!=3628800, �O�� 0088263 '-1'
//    ans[1][0]=1; ans[1][1]=-1; solved[1]=1;
//    ans[2][0]=2; ans[2][1]=-1; solved[2]=1;
//    ans[3][0]=6; ans[3][1]=-1; solved[3]=1;
//    ans[4][0]=4; ans[4][1]=2; ans[4][2]=-1; solved[4]=1;
//    ans[5][0]=0; ans[5][1]=2; ans[5][2]=1; ans[5][3]=-1; solved[5]=1;

    int carry=0;
    int theNumber=k;
    for(int i=0; theNumber>0 ; i++){///ex. k=500, i=0 ��ܭӦ��, i�����{�b�����
        int now=theNumber%10;
        int j;
        for(j=0; ans[k-1][j]!= -1; j++){///ex. 10! = 3628800 ans[10] �O 0088263 (-1...), j����ans���C�@��
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
{/// 500!   500! 500! ���Ыܦh��,�u���Ĥ@���n�u����, ��L�i�H�d ans[500]
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
        for(int i=n; i>=0; i--){///500,499,498..�ݬݽ֦�����
            if(solved[i]==1){///�@���o�{ solved[49]������, ���@�U i=49�}�l 50,51,... 500����@��
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
