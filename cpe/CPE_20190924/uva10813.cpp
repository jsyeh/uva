#include <stdio.h>
int table[5][5];
int call[75];
int testWin()
{
    for(int i=0;i<5;i++){///for each row
        int zero=0;
        for(int j=0;j<5;j++){
            if(table[i][j]==0) zero++;///�Ʀ��X��0
        }
        if(zero==5) return 1;///�o��5��, win!!
    }
    for(int j=0;j<5;j++){///for each column
        int zero=0;
        for(int i=0;i<5;i++){
            if(table[i][j]==0) zero++;
        }
        ///printf("=%d=", zero);
        if(zero==5) return 1;///win
    }
    ///printf("\n");///debug �����F, ���n�æL
    int zero=0;
    for(int i=0;i<5;i++){///�﨤�u
        if(table[i][i]==0) zero++;
    }
    if(zero==5) return 1;

    zero=0;
    for(int i=0;i<5;i++){
        if(table[i][4-i]==0) zero++;
    }
    if(zero==5) return 1;

    return 0;///�Sretrun 1 �S��win
}
int testBingo(int now)
{
    int j;///i for row, j for column
    if(now<=15){///�T�w�n�b���̧�Ʀr
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
            table[i][j]=0;///0�N����/�α�/�M��
            if( testWin() ==1) return 1;
        }
    }
    return 0;///not win
}
int main()
{
    table[2][2]=0;///�p��
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        for(int i=0;i<5;i++){///row
            for(int j=0;j<5;j++){///col
                if(i==2 &&j==2) continue;///�ޥ�,�i�������� free space
                scanf("%d", &table[i][j]);
            }
        }
        int ans=0, bingo=0;
        for(int i=1;i<=75;i++){///Ū�J �s���X �q��1�i�}�l
            scanf("%d", &call[i]);/// call
            ///test if bingo!!! �p�G bingo, ans=i
            if(bingo==0 && testBingo(call[i])==1){
                bingo=1;
                ans=i;///�����D
            }
        }///�u����1��bingo�n�O!!!

        printf("BINGO after %d numbers announced\n", ans);
    }///Ū�J test data
}
