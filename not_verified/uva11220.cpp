#include <stdio.h>
int word[100][32];///�r�n�j�@�I,�]�r�굲��
int M[100];
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){


        for(int i=0;    ; i++){
            scanf("%c",  )
            for(int j=0;  ; j++){
                scanf("%c", &c);///����C�檺��1�Ӧr��Ū��
                scanf("%s", &word[i]);
                scanf("%c", &c);///���Ѥ~�Ƿ|���ޥ�
                if(c=='\n'){
                    M[i]=j+1;///���I�ݭn���@�U
                    printf("M[%d]: %d\n", i, M[i]);///�{�ɩ�!
                    break;///break inner loop j (M��)
                }
            }
        }



        printf("Case #%d:\n", t);
    }
}
