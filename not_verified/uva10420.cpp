#include <stdio.h>
#include <string.h>
char line[2000][80];
int order[2000];
int main()
{
    int N;
    scanf("%d", &N);///�Ʀr�᭱���Ӹ���
    fgets(line[0], 2000, stdin);///�u�OŪ�@�U�Ʀr�᭱������

    for(int i=0;i<N;i++){
        fgets(line[i], 2000, stdin);///�o��ܦh�ǥͤ��|,Ū����
    }
    ///�Ƨ�
    for(int i=0;i<N;i++){
        order[i]=i;
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int ii=order[i], jj=order[j];
            int lenA=strlen(line[ii]), lenB=strlen(line[jj]);

            for(int k=0; k<lenA && k<lenB; k++){
                if( line[ii][k] > line[jj][k] ){///�j�p�ϹL�ӤF,
                    ///swap lines
                    int temp=order[i]; order[i]=order[j]; order[j]=temp;
                }
            }
        }
    }
///    for(int i=0;i<N;i++){
///        printf("%s\n", line[ order[i] ]);
///    }///�v�T�{�r��i�H�q�p�ƨ�j
    ///�⵪��
    char nowCountry[80];
    int countN=0;
    sscanf(line[ order[0] ], "%s", nowCountry);///��C�檺��1�Ӱ�a����rŪ�X��
    for(int i=0;i<N;i++){
        char nextCountry[80];
        sscanf(line[ order[i] ], "%s", nextCountry);
        if( strcmp(nowCountry, nextCountry)==0 ){
            countN++;///�ۦP����a,�N+1
        }else{///���ۦP����a,�N�s�}�l
            printf("%s %d\n", nowCountry, countN);
            countN=1;
            strcpy(nowCountry, nextCountry);
        }
    }
    printf("%s %d\n", nowCountry, countN);///�̫�@��,�n���U�@�U
}
