#include <stdio.h>
#include <string.h>
char name[50][100];///��50�ӤH�W
int nameN=0;
int findOrInsertInTable(char nameNow[100])
{
    for(int i=0;i<nameN;i++){
        if( strcmp( nameNow, name[i])==0 ) return i;
    }
    strcpy( name[nameN], nameNow);    ///�H�U�䤣��, �u�n�s�W
    nameN++;
    return (nameN-1);
}
int main()
{
    int P, R;
    while( scanf("%d %d", &P, &R) == 2){
        if(P==0 && R==0) break;
        int table[50][50]={};///table[i][j]==1 ��� i �٦� j�O�n�B��, �@�}�l���n�M��0
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
