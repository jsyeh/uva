#include <stdio.h>
#include <string.h>
char word[1001][30];
int histogram[1001][26];
void genHistogram(int i)
{
    for(int k=0;k<26;k++) histogram[i][k]=0;
    for(int k=0; word[i][k]!='\0'; k++){
        int now=word[i][k]-'a';
        histogram[i][now]++;
    }
}
int compareHistogram(int i1, int i2)
{
    for(int k=0; k<26; k++){
        if( histogram[i1][k]!=histogram[i2][k] ) return -1;
    }
    return 0;
}
int main()
{
    int T, N;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        scanf("%d", &N);
        for(int i=0; i<N; i++){
            scanf("%s", word[i]);
            genHistogram(i);
        }

        if(t>1) printf("\n");
        while(scanf("%s", word[1000])==1){///利用空的第1001個字,來當query欄位
            if(strcmp(word[1000], "END")==0) break;
            printf("Anagrams for: %s\n", word[1000]);
            genHistogram(1000);
            int found=0;
            for(int i=0;i<N;i++){
                if( compareHistogram(i, 1000)==0 ){
                    found++;
                    printf("%3d) %s\n", found, word[i]);
                }
            }
            if(found==0) printf("No anagrams for: %s\n", word[1000]);
        }
    }
}
