#include <stdio.h>
#include <string.h>
int record[20];
int main()
{
    int N;
    char str1[10], str2[10];
    while(scanf("%d %s %s", &N, str1, str2)==3){
        if(N==0)break; ///���i���g�o��, �]�p�G�O0,�W��while�u�|Ū��1�ӭ�
        if( strcmp(str2, "high")==0){///�Ӱ�? �N��񥦤j��������
            for(int i=N; i<=10; i++) record[i] = -1;///killed
        }else if(strcmp(str2, "low")==0){///�Ӱ�? �N��񥦤p��������
            for(int i=0; i<=N; i++) record[i] = -1;
        }else if(strcmp(str2, "on")==0){///�}�l�d�ݦ��S���@��?
            if(record[N]==-1){///���M�O�w�������Ʀr,���@�w�O�@��!!!
                printf("Stan is dishonest\n");
            }else{
                printf("Stan may be honest\n");
            }
            for(int i=0;i<20;i++) record[i]=0;///�M�ŭ���
        }
    }
}
