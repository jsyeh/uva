#include <stdio.h>
///先不要用 strtok() 也不要用 getchar(), 慢慢來
char line[2000];
int testIfAlphabet(char c)
{
    if(c>='A' && c<='Z') return 1;///it is alphabet
    if(c>='a' && c<='z') return 1;///it is alphabet
    return 0;///it is not alphabet
}
int main()
{
    int T;
    scanf("%d\n\n", &T);
    for(int t=1; t<=T; t++){
        if(t>=2) printf("\n");
        printf("Case #%d:\n", t);

        while( gets(line) ){
            if(line[0]=='\0') break;

            int a=0, b=0;/// a words, b char
            int spacing=0;
            for(int j=0; line[j]!='\0'; j++){
                if(line[j]==' ' && b<=a) a--;///還沒有把想要的字印出來, a退一步
                if(line[j]==' ') {
                    b=0; spacing=1;
                    continue;
                }

                if( testIfAlphabet(line[j]) && spacing==1 ){
                    a++;
                    spacing=0;
                }else if(a==b){
                    printf("%c", line[j]);
                }

                b++;
            }
            printf("\n");
        }
    }
}

