#include <stdio.h>///­n¾Ç¥´¦r https://www.typing.com/student/game/keyboard-ninja
char input[] ="dmbgthjkpl;'.,[]eyfuonrvic";
char INPUT[] ="DMBGTHJKPL;'.,[]EYFUONRVIC";
char output[]="abcdefghijklmnopqrstuvwxyz";
char findInTable(char c)
{
    for(int i=0;i<26;i++){
        if(input[i]==c) return output[i];
        if(INPUT[i]==c) return output[i];
    }
    return c;
}
int main()
{
    char c;
    while( scanf("%c", &c)==1  ){
        c = findInTable(c);
        printf("%c", c);
    }
}
