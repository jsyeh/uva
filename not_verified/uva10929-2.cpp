#include <stdio.h>
int main()
{
    char line[2000];///1000¦ì¼Æ
    while( scanf("%s", line)==1 ){
        int oddSum=0, evenSum=0;
        for(int i=0; line[i] != '\0' ; i++){
            int now = line[i] - '0';
            if( i%2==1 ) oddSum+=now;
            else evenSum+=now;
        }
        if( (oddSum-evenSum)%11==0 ) printf("%s is a multiple of 11.\n", line);
        else printf("%s is not a multiple of 11.\n", line);
    }
}
