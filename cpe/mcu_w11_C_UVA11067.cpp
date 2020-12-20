///2020-05-06 23:23開始看題目
///23:24了解,是小紅帽的問題
///23:25邊讀Input邊寫code
///23:29 input/output ok.
///這題的 path是 2^32-1, 可見不能暴力法。
///這時就是DP了!
///23:38完成
#include <stdio.h>
int table[200][200];
int wolf[200][200];
void clearTable()
{
    for(int x=0;x<=102;x++){
        for(int y=0;y<=102;y++){
            table[x][y]=0;
            wolf[x][y]=0;
        }
    }
}
int main()
{
    int w,h;
    while( scanf("%d %d", &w, &h)==2 ){
        if(w==0 && h==0) break;///23:25
        clearTable();

        int n;
        scanf("%d", &n);///wolf N
        for(int i=0; i<n; i++){
            int x, y;
            scanf("%d %d", &x, &y);///23:26
            wolf[x][y]=1;//table[x][y]=-1;
        }
        for(int x=0; x<=w; x++){
            for(int y=0; y<=h; y++){
                if(wolf[x][y]==1) table[x][y]=0;
                else if(x==0 && y==0) table[x][y]=1;
                else if(x==0) table[x][y]=table[x][y-1];
                else if(y==0) table[x][y]=table[x-1][y];
                else{
                    table[x][y]=table[x-1][y]+table[x][y-1];
                }///23:37寫完
            }
        }
        int ans=table[w][h];
        if(ans==1) printf("There is one path from Little Red Riding Hood’s house to her grandmother’s house.\n");
        else if(ans>1) printf("There are %d paths from Little Red Riding Hood’s house to her grandmother’s house.\n", ans);
        else printf("There is no path.\n");///23:29 output OK
    }
}
/*
1 1
0
1 1
2
0 1
1 0
4 4
3
0 1
1 1
3 1
10 10
0
10 10
3
0 1
1 1
1 0
3 3
5
1 0
1 1
1 2
2 2
3 2
0 0
*/
