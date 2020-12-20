#include <stdio.h>
char line[10000];///宣告在外面
char before[]=" qwertyuiop[]asdfghjkl;'zxcvbnm,.QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,.1234567890-=";
char after[] ="   qwertyuiop  asdfghjkl  zxcvbnm  qwertyuiop  asdfghjkl  zxcvbnm  1234567890";
char translate(char a)
{
    for(int i=0; before[i] != '\0' ; i++){
        if( before[i] == a) return after[i];
    }
    return a;///old input 直接return
}
int main()
{///(1) Input不能用scanf()
    gets(line);///可讀到最後 CPE 1/5 chance to see it!

    for(int i=0; line[i] != '\0' ; i++){
        line[i] = translate( line[i] );///(3)把它翻譯出來
    }

    printf("%s", line);
    ///(2) Outpupt
}
