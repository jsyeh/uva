#include <stdio.h>
char input[2000];
/// '0'..'1' 'A'...'Z' 'a'...'z'
int table[256];
int main()
{
    for(int i=0; i<256; i++) table[i]= -1;///�٨S������
    for(int i='0'; i<='9'; i++) table[i] = i-'0' + 1;///
    table['0']=2;
    for(int i='A'; i<='Z'; i++) table[i] = i-'A' + 11;
    for(int i='a'; i<='z'; i++) table[i] = i-'a' + 37;

    while( scanf("%s", &input) == 1 ){
        int ans=0;
        for(int i=0; input[i]!='\0'; i++){///�嫬���r��v�r�hŪ
            int now = input[i];
            table[now];///�ڭ̵o�� table
            if(table[now]==-1){///�����X�z���Ʀr
                ans=-1;
                break;///��������
            }///��L���N�O�X�z���o
            if( table[now] > ans ){
                ans = table[now];
            }
        }
        if(ans == -1) printf("such number is impossible!\n");
        else printf("%d\n", ans);
    }
}
