///18:28-18:34
#include <stdio.h>
int main()
{
    char input[]= "ertyuiop[]dfghjkl;'cvbnm,./ ";
    char output[]="qwertyuiopasdfghjklzxcvbnm, ";
    char c;
    while( scanf("%c", &c)==1){
        if(c>='A'&&c<='Z') c = c-'A'+'a';
        for(int i=0;i<28;i++){
            if(c==input[i]){
                c=output[i];
                break;
            }
        }
        printf("%c", c);
    }
}
