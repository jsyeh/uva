#include <stdio.h>
int table[5][5];
int call[75];
int testWin()
{
    for(int i=0;i<5;i++){///for each row
        int zero=0;
        for(int j=0;j<5;j++){
            if(table[i][j]==0) zero++;///數有幾個0
        }
        if(zero==5) return 1;///得滿5個, win!!
    }
    for(int j=0;j<5;j++){///for each column
        int zero=0;
        for(int i=0;i<5;i++){
            if(table[i][j]==0) zero++;
        }
        ///printf("=%d=", zero);
        if(zero==5) return 1;///win
    }
    ///printf("\n");///debug 完成了, 不要亂印
    int zero=0;
    for(int i=0;i<5;i++){///對角線
        if(table[i][i]==0) zero++;
    }
    if(zero==5) return 1;

    zero=0;
    for(int i=0;i<5;i++){
        if(table[i][4-i]==0) zero++;
    }
    if(zero==5) return 1;

    return 0;///沒retrun 1 沒有win
}
int testBingo(int now)
{
    int j;///i for row, j for column
    if(now<=15){///確定要在哪裡找數字
        j=0;
    }else if(now<=30){
        j=1;
    }else if(now<=45){
        j=2;
    }else if(now<=60){
        j=3;
    }else if(now<=75){
        j=4;
    }
    for(int i=0;i<5;i++){
        if(table[i][j]==now){
            ///printf("====%d==", now);///debug
            table[i][j]=0;///0代表中獎/用掉/清空
            if( testWin() ==1) return 1;
        }
    }
    return 0;///not win
}
int main()
{
    table[2][2]=0;///小心
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        for(int i=0;i<5;i++){///row
            for(int j=0;j<5;j++){///col
                if(i==2 &&j==2) continue;///技巧,可跳掉中間 free space
                scanf("%d", &table[i][j]);
            }
        }
        int ans=0, bingo=0;
        for(int i=1;i<=75;i++){///讀入 叫號碼 從第1張開始
            scanf("%d", &call[i]);/// call
            ///test if bingo!!! 如果 bingo, ans=i
            if(bingo==0 && testBingo(call[i])==1){
                bingo=1;
                ans=i;///找到問題
            }
        }///只有第1次bingo要記!!!

        printf("BINGO after %d numbers announced\n", ans);
    }///讀入 test data
}
