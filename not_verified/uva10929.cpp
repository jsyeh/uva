#include <stdio.h>
int main()
{
    char line[2000];
    while( scanf("%s", &line)==1){///1000���,�u��Φr��
        int oddSum=0, evenSum=0;///�_�ƶ����M,���ƶ����M
        for(int i=0; line[i]!='\0' ; i++){///�r�ꤤ,�C���
            int now = line[i]-'0';///�Ʊ��r��=>�Ʀr
            if(i%2==1) oddSum+= now;
            else evenSum+= now;
        }
        if( (oddSum-evenSum)%11 ==0 ){
            printf("%s is a multiple of 11.\n", line);
        }else{
            printf("%s is not a multiple of 11.\n", line);
        }
    }
}
