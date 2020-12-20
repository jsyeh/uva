#include <stdio.h> ///更新版: (1)沒出現的字母不管它, (2)要嚴格減少
char line[2000];
int main()
{
    while( scanf("%s", line) == 1){ ///(3)用 while(迴圈) 可測很多組哦!
        int table[26]={};///(4)陣列宣告在裡面, 測每組時, 每次都清空
        for(int i=0; line[i]!=0; i++){
            char c=line[i];///這是逐字母分析的迴圈
            if(c>='A' && c<='Z') table[ c-'A' ]++;///我大小寫都有考慮哦
            if(c>='a' && c<='z') table[ c-'a' ]++;
        }
        int bad=0, prev=99999;///技巧: prev 之前最大值(哨兵)
        for(int i=0; i<26; i++){///更新: 字母沒出現的, 跳過
            if( table[i]>0 ){///有出現的字母,才去比較判斷
                if( table[i]<prev ) prev=table[i];///嚴格減少時, 接棒!
                else bad=1;///如果字母沒有嚴格減少, 就壞掉了!
            }
        }
        if(bad==0) printf("It's a beautiful word.\n");
        else printf("It's not a beautiful word.\n");
    }
}
