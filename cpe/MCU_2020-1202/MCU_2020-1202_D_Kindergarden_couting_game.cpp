#include <stdio.h>
int main()
{
    char line[1000];
    while( gets(line) !=0 ){
        int words=0;
        int prev=0;///1:alphabet, 0:non-alphabet
        for(int i=0; line[i]!=0; i++){
            char c=line[i];
            int now=0;///1:alphabet, 0:non-alphabet
            if(c>='A'&&c<='Z') now=1;
            if(c>='a'&&c<='z') now=1;
            if(now==1 && prev==0){
                prev=1; words++;
            }else if(now==0 && prev==1){
                prev=now;
            }
        }
        printf("%d\n", words);
    }
}
