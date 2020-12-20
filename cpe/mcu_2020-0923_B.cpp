#include <stdio.h>///5min
char line[2000];
int main()
{
    while(scanf("%s", line)==1){
        if(line[0]=='0')break;

        int n1=0, n2=0;
        for(int i=0; line[i]!=0; i++){
            int now=line[i]-'0';
            if(i%2==0) n1+=now;
            else n2+=now;
        }
        if( (n1-n2)%11==0 ) printf("%s is a multiple of 11.\n", line);
        else printf("%s is not a multiple of 11.\n", line);
    }
}
