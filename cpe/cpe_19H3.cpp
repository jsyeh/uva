#include <stdio.h>
char line[32];
int testCoolWord(char line[32])
{
    int freq[26]={0};///freq[0]表示a出現次數, freq[1]是b
    for(int i=0; line[i]!='\0'; i++){///字串處理
        char now = line[i];
        freq[ now-'a' ]++;///統計出現了1次,寫到freq[]裡
    }
    ///測試 freq[] 都不一樣
    int bad=0;
    int diff=0;
    for(int i=0; i<26; i++){
        if(freq[i]==0) continue;
        diff++;///有新的出現的字母
        for(int j=i+1; j<26; j++){
            if (freq[i] == freq[j]) bad=1;
        }
    }
    if(bad==1) return 0;///bad
    if(bad==0 && diff>=2) return 1;///cool word
}
int main()
{
    int n, t=1;;
    while( scanf("%d", &n)==1 ){
        int cool=0;
        for(int i=0; i<n; i++){
            scanf("%s", &line);
            if(testCoolWord(line)==1) cool++;
        }
        printf("Case %d: %d\n", t, cool);
        t++;
    }
}
