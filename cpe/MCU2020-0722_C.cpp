#include <stdio.h>
#include <string.h>
#include <ctype.h>
char input[30];
///                ABCDEFGHIJKLMNOPQRSTUVWXYZ
char rev_char[27]="A   3  HIL JM O   2TUVWXY5";
///               0123456789
char rev_num[11]=" 1SE Z  8 ";
int palindrome(char input[])
{
    int bad=0;
    int len=strlen(input);
    for(int i=0; i<len; i++){
        char c=input[i];
        char c2=input[len-1-i];
        if(c!=c2) return 0;///not palindrome
    }
    return 1;///after test, is palindrome
}
int mirrored(char input[])
{
    int len=strlen(input);
    for(int i=0; i<len; i++){
        char c=input[i];
        char c2=input[len-1-i];
        if(isdigit(c) && (rev_num[c-'0']!=c2) ){
            return 0;///not mirrored
        }
        if(isupper(c) && (rev_char[c-'A']!=c2) ){
            return 0;///not mirrored
        }
    }
    return 1;///after all test, mirrored
}
int main()
{
    while( scanf("%s", input)==1 ){
        int p=palindrome(input);
        int m=mirrored(input);
        if(p&&m) printf("%s -- is a mirrored palindrome.\n");
        else if(p) printf("%s -- is a regular palindrome.\n");
        else if(m) printf("%s -- is a mirrored string.\n");
        else printf("%s -- is not a palindrome.\n");
    }
}
