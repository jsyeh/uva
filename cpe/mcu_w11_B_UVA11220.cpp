///2020-05-06 23:10�}�l�Q
///23:12 input�����Ū,��Ū��
///23:16 �٦b�B�z input�� strtok()
///23:18 �g�n 23:22���է���,�ѨM if(strlen(token)>p){ ����
#include <stdio.h>
#include <string.h>
char line[30000];
int main()
{
    int T;
    scanf("%d\n\n", &T);
    for(int t=1;t<=T;t++){
        if(t>1)printf("\n");
        printf("Case #%d:\n", t);
        while( gets(line)!=NULL ){
            if(line[0]=='\0')break;
            int p=0;
            char * token=strtok(line, " ");
            while(1){
                if(strlen(token)>p){
                    printf("%c", token[p]);
                    p++;
                }
                token = strtok(NULL, " ");
                if(token==NULL)break;
            }
            printf("\n");
        }
    }
}
/*
2
Hey good lawyer
as I previously previewed
yam does a soup

First I give money to Teresa
after I inform dad of
your horrible soup
*/
