#include <stdio.h>
int main()
{
    char a[2000];
    char b[2000];
    while( scanf("%s %s", a, b) == 2 ){
        int table26A[26]={};///自動會把裡面都放0
        int table26B[26]={};

        for(int i=0; a[i]!='\0'  ; i++){
            int now = a[i]-'a' ;
            table26A[now]++;
        }
        for(int i=0; b[i]!='\0'  ; i++){
            int now = b[i]-'a' ;
            table26B[now]++;
        }
        ///(2) Output
        for(int i=0; i<26; i++){
            int small=table26A[i];
            if(table26B[i]<small) small= table26B[i];
            for(int k=0; k<small; k++){
                printf("%c", 'a'+i);
            }
        }
    }
}
/*
pretty
littttttttle
ett

pretty => eprtty
women =>  emnow

walking => agiklnw
down =>    dnow

想法:
01234567891123456789212345
abcdefghijklmnopqrstuvwxyz
    1          1 1 2    1
    1   1  2       8
    e       mno       w
*/
