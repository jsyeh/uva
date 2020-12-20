#include <stdio.h>
#include <string.h>
char line[2000][80];
int order[2000];
int main()
{
    int N;
    scanf("%d", &N);///數字後面有個跳行
    fgets(line[0], 2000, stdin);///只是讀一下數字後面的跳行

    for(int i=0;i<N;i++){
        fgets(line[i], 2000, stdin);///這行很多學生不會,讀到行尾
    }
    ///排序
    for(int i=0;i<N;i++){
        order[i]=i;
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            int ii=order[i], jj=order[j];
            int lenA=strlen(line[ii]), lenB=strlen(line[jj]);

            for(int k=0; k<lenA && k<lenB; k++){
                if( line[ii][k] > line[jj][k] ){///大小反過來了,
                    ///swap lines
                    int temp=order[i]; order[i]=order[j]; order[j]=temp;
                }
            }
        }
    }
///    for(int i=0;i<N;i++){
///        printf("%s\n", line[ order[i] ]);
///    }///己確認字串可以從小排到大
    ///算答案
    char nowCountry[80];
    int countN=0;
    sscanf(line[ order[0] ], "%s", nowCountry);///把每行的第1個國家的單字讀出來
    for(int i=0;i<N;i++){
        char nextCountry[80];
        sscanf(line[ order[i] ], "%s", nextCountry);
        if( strcmp(nowCountry, nextCountry)==0 ){
            countN++;///相同的國家,就+1
        }else{///不相同的國家,就新開始
            printf("%s %d\n", nowCountry, countN);
            countN=1;
            strcpy(nowCountry, nextCountry);
        }
    }
    printf("%s %d\n", nowCountry, countN);///最後一行,要照顧一下
}
