#include <stdio.h>
char line[32];
int testCoolWord(char line[32])
{
    int freq[26]={0};///freq[0]���a�X�{����, freq[1]�Ob
    for(int i=0; line[i]!='\0'; i++){///�r��B�z
        char now = line[i];
        freq[ now-'a' ]++;///�έp�X�{�F1��,�g��freq[]��
    }
    ///���� freq[] �����@��
    int bad=0;
    int diff=0;
    for(int i=0; i<26; i++){
        if(freq[i]==0) continue;
        diff++;///���s���X�{���r��
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
