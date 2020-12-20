#include <stdio.h>
int word[100][32];///字要大一點,因字串結尾
int M[100];
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){


        for(int i=0;    ; i++){
            scanf("%c",  )
            for(int j=0;  ; j++){
                scanf("%c", &c);///先把每行的第1個字母讀到
                scanf("%s", &word[i]);
                scanf("%c", &c);///今天才學會的技巧
                if(c=='\n'){
                    M[i]=j+1;///有點需要測一下
                    printf("M[%d]: %d\n", i, M[i]);///臨時放的!
                    break;///break inner loop j (M個)
                }
            }
        }



        printf("Case #%d:\n", t);
    }
}
