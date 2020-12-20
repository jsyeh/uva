#include <stdio.h>
char line[10];
char table[100][100];
int main()
{
    int h,w;
    while(scanf("%d %d",&h,&w)==2){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                scanf("%s", line);
                table[i][j]=line[0];
            }
        }
        for(int j=0;j<=w;j++) table[h][j]='*';
        for(int i=0;i<=h;i++) table[i][h]='*';
        int good=1;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(table[i][j]=='*')continue;
                if(table[i][j]==table[i][j+1] || table[i][j]==table[i+1][j+1] || table[i][j]==table[i+1][j]){
                    good=0; i=h;j=w;
                }
            }
        }
        if(good==1)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
