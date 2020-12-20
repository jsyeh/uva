#include <stdio.h>
#include <string.h>
char name[50][100];///有50個人名
int nameN=0;
int findOrInsertInTable(char nameNow[100])
{
    for(int i=0;i<nameN;i++){
        if( strcmp( nameNow, name[i])==0 ) return i;
    }
    strcpy( name[nameN], nameNow);    ///以下找不到, 只好新增
    nameN++;
    return (nameN-1);
}
int main()
{
    int P, R;
    while( scanf("%d %d", &P, &R) == 2){
        if(P==0 && R==0) break;
        int table[50][50]={};///table[i][j]==1 表示 i 還有 j是好朋友, 一開始都要清為0
        for(int r=0; r<R; r++){
            char name1[100], name2[100];
            scanf("%s %s", name1, name2);
            int r1=findOrInsertInTable(name1);
            int r2=findOrInsertInTable(name2);
            table[r1][r2]=1; table[r2][r1]=1;
        }

        for(int i=0;i<nameN; i++){
            for(int j=0;j<nameN; j++){
                printf("%d ", table[i][j]);
            }
            printf("\n");
        }
    }
}
