#include <stdio.h>
char line[10000];
char before[]="1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./QWERTYUIOPASDFGHJKLZXCVBNM";
char after[] ="  1234567890  qwertyuiop  asdfghjkl  zxcvbnm,  qwertyui  asdfghjk zxcvb";
char translate(char a)
{
    for(int i=0; before[i]!='\0'; i++){
        if( before[i] == a) return after[i];
    }
    return a;///�p�G�d����,���N���¥X��
}
int main()
{///(1) Input
    gets(line);

    for(int i=0; line[i]!='\0';i++){
        line[i] = translate( line[i] );
    }

    ///(2) Output
    printf("%s", line);
}
