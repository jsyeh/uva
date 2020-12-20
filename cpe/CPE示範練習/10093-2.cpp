#include <stdio.h>
char input[2000];
/// '0'..'1' 'A'...'Z' 'a'...'z'
int table[256];
int main()
{
    for(int i=0; i<256; i++) table[i]= -1;///還沒有答案
    for(int i='0'; i<='9'; i++) table[i] = i-'0' + 1;///
    table['0']=2;
    for(int i='A'; i<='Z'; i++) table[i] = i-'A' + 11;
    for(int i='a'; i<='z'; i++) table[i] = i-'a' + 37;

    while( scanf("%s", &input) == 1 ){
        int ans=0;
        for(int i=0; input[i]!='\0'; i++){///典型的字串逐字去讀
            int now = input[i];
            table[now];///我們發明 table
            if(table[now]==-1){///有不合理的數字
                ans=-1;
                break;///提早結束
            }///其他的就是合理的囉
            if( table[now] > ans ){
                ans = table[now];
            }
        }
        if(ans == -1) printf("such number is impossible!\n");
        else printf("%d\n", ans);
    }
}
