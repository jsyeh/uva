#include <stdio.h>
///我先用比較少的錢,來方便大家理解
///50 4 預算50元, 下面有4種選擇
///10 2 第1件衣服10元, 2點滿意度
///10 3 第1件衣服10元, 3點滿意度
///20 3 第1件衣服20元, 3點滿意度
///40 4 第1件衣服40元, 4點滿意度
int input1[5]={0, 10,10,20,40};
int input2[5]={0,  2, 3, 3, 4};
int table[6][51];///table[p][m]表示 考慮p種衣服時, 當預算是 money時, 最好的滿意度是多少
int main()
{///先只用一筆測試資料,方便大家理解
    int Money=50, N=4;///while( scanf("%d %d", &Money, &N)==2 )
    for(int m=0; m<=Money; m++){///m表示各種可能的預算
        table[0][m]=0;///初始化,沒買任何種衣服,滿意度是0
    }
    for(int p=1; p<=N; p++){///如果考慮前p件衣服
        int a = input1[p], b=input2[p];///a:第p件衣服價錢, b:第p件衣服的滿意度
        for(int m=0; m<=Money; m++){///不同的總預算, 要決定table[p][m]的值
            if( m-a<0) {
                table[p][m]=table[p-1][m];///因為m元不夠買第p件,直接照舊
                continue;
            }
            ///如果要考慮某件衣服,要先留預算,比較「買/不買」的差別
            int tobuy=m-a;///如果要買, 要查看 table[p-1][m-a]那格, 有預留錢才能買
            if( m-a>=0 && table[p-1][m-a]+b>table[p-1][m]  ) table[p][m]=table[p-1][m-a]+b;///有更滿意,買,用新的滿意度
            else table[p][m]=table[p-1][m];///不值得買第p件,照舊
        }
    }
    int ans=table[4][50];
    printf("%d\n", ans);
}
