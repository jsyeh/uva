#include <stdio.h>///gets()
#include <string.h>///for strcmp()字串比大小 string compare
#include <stdlib.h>///for qsort()
char treeName[1000000][32];
int compare(const void * a, const void * b)
{///大部分人,不懂。因為這是大二上資料結構會教qsort()
    return strcmp( (const char*) a, (const char*) b);
}
int main()
{///(1) Input, 不可用大一熟悉的scanf()而要用gets
    int T;
    scanf("%d\n\n", &T);///怪的寫法,要讀掉2個跳行
    for(int t=0; t<T; t++){
        int treeN=0;
        while(1){
            ///char line[200];
            char* revl = gets(treeName[treeN]);///不熟悉
            if(revl==NULL) break;///2種可能結束: (a)eof, (b) error
            ///printf("==%s==\n", line);///輔助用的鷹架
            if( strcmp(treeName[treeN], "")==0 ) break;///正常的case空白行

            treeN++;///多一顆樹
        }
        ///(3) 計算 (a) 排序,照字母, (b)計算數量

//        for(int i=0;i<treeN; i++){///輔助用的鷹架
//            printf("==%s==\n", treeName[i]);///輔助用的鷹架
//        }///使用前
        qsort( treeName, treeN, 32, compare);
//        ///使用後
//        printf("After:\n");///輔助用的鷹架
//        for(int i=0;i<treeN; i++){///輔助用的鷹架
//            printf("==%s==\n", treeName[i]);///輔助用的鷹架
//        }
        ///(2) Output
        int oldPos=0;
        for(int i=1; i<treeN; i++){
            if( strcmp( treeName[i], treeName[i-1]) !=0 ){
                printf("%s %.4f\n", treeName[oldPos], 100.0*(i-oldPos)/treeN);
                oldPos=i;///更新,新的開始,把現在這裡當oldPos
            }
        }
        ///照顧最後一筆
        printf("%s %.4f\n", treeName[oldPos], 100.0*(treeN-oldPos)/treeN);
    }
}
