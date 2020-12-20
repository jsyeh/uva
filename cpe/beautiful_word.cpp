#include <stdio.h>
char line[2000];///裡面放字母
int table[26]={};///統計字母出現的表格,先清為0
int main()
{
    scanf("%s", line);
    for(int i=0; line[i]!=0; i++){
        char c=line[i];
        if(c>='A' && c<='Z') table[ c-'A' ]++;///大寫字母
        if(c>='a' && c<='z') table[ c-'a' ]++;///小寫字母
    }
    int bad=0;///一開始還沒有任何壞掉的順序
    for(int i=0; i<26-1; i++){
        if( table[i]<table[i+1] ) bad=1;///大小順序不對,就壞了
    }   ///我假設前後相同的 aabb 也是 beautiful word
    if(bad==0) printf("It's a beautiful word.\n");
    else printf("It's not a beautiful word.\n");
}
