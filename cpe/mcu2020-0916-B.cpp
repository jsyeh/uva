///2020-09-16 18:39遇到問題: 無法比對的 ! 及 ? 要如何判斷?
/// !要全部 codeAns[i] 都測過後, 看對應的長度, 把 word短的拿來用, 如果一樣長,就打!
/// ?
#include <stdio.h>
#include <string.h>
int codeN=0;
char tableC[100];
char tableCode[100][10];
char codeAns[100][2000];

int contextN=0;
char words[100][20];

void genWordCode(int contextN)
{
    codeAns[contextN][0]='\0';
    char * line = words[contextN];
    for(int i=0; line[i]!='\0'; i++){
        char c = line[i];
        //find the morse code
        for(int i=0;i<codeN;i++){
            if(tableC[i]==c){
                strcat(codeAns[contextN], tableCode[i]);
                break;
            }
        }
    }
    printf("[%s] %s\n", codeAns[contextN], words[contextN]);
}

int main()
{
    while(1){
        char c[5];
        scanf("%s", c);
        if(c[0]=='*') break;
        tableC[codeN]=c[0];
        scanf("%s", tableCode[codeN] );
        codeN++;
    }
    //for(int i=0;i<codeN;i++){
    //    printf("[%c] =%s=\n", tableC[i], tableCode[i]);
    //}
    ///context session
    while(1){
        char c[1000];
        scanf("%s", c);
        if(c[0]=='*') break;
        strcpy(words[contextN], c);
        genWordCode(contextN);
        contextN++;
    }
//    for(int i=0;i<contextN;i++){
//        printf("[%s]\n", words[i]);
//    }
    char input[100];
    while(1){
        scanf("%s", input);
        if(input[0]=='*')break;
        for(int i=0; i<contextN; i++){
            if(strcmp(codeAns[i],input)==0){
               printf("%s\n", words[i]);
               break;
            }
        }
    }
}
