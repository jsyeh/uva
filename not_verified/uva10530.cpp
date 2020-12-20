#include <stdio.h>
#include <string.h>
int record[20];
int main()
{
    int N;
    char str1[10], str2[10];
    while(scanf("%d %s %s", &N, str1, str2)==3){
        if(N==0)break; ///其實可不寫這行, 因如果是0,上面while只會讀到1個值
        if( strcmp(str2, "high")==0){///太高? 就把比它大的都殺掉
            for(int i=N; i<=10; i++) record[i] = -1;///killed
        }else if(strcmp(str2, "low")==0){///太高? 就把比它小的都殺掉
            for(int i=0; i<=N; i++) record[i] = -1;
        }else if(strcmp(str2, "on")==0){///開始查看有沒有作弊?
            if(record[N]==-1){///竟然是已殺掉的數字,那一定是作弊!!!
                printf("Stan is dishonest\n");
            }else{
                printf("Stan may be honest\n");
            }
            for(int i=0;i<20;i++) record[i]=0;///清空重來
        }
    }
}
