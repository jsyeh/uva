#include <stdio.h>
char line[32];
int testCoolWord(char line[32])
{
    int freq[26]={0};///freq[0]ボa瞷Ω计, freq[1]琌b
    for(int i=0; line[i]!='\0'; i++){///﹃矪瞶
        char now = line[i];
        freq[ now-'a' ]++;///参璸瞷1Ω,糶freq[]柑
    }
    ///代刚 freq[] 常ぃ妓
    int bad=0;
    int diff=0;
    for(int i=0; i<26; i++){
        if(freq[i]==0) continue;
        diff++;///Τ穝瞷ダ
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
