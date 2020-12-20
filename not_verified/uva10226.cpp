#include <stdio.h>
char line[60];///字母最多30個, 故意大一點
char species[10000][32];///資料結構1
int total[10000];///資料結構2
int main()
{
    int n;
    scanf("%d", &n);
    gets(line);///數字後面竟然有個跳行
    gets(line);///開始一堆英文樹名之前, 還有個跳行
    for(int t=1; t<=n; t++){
        ///(1)Input有點難, 因為有空格 不能用scanf(), 要用gets()或fgets()
        ///小心, 空白行, 跳行, 會很煩

        ///(5)在讀進來之前, 你的資料結構要清空
        ///在讀的時候, 1,000,000行, 而且有重覆的, unique只有10,000
        while(1){
            gets(line);///重點, 一次一整行
            printf("==%s==\n", line);
            ///(2) 要有資料結構,要存10,000個不同的樹名,
            ///(3) 要比對新讀進來的樹名,有沒有重覆
            ///(4) 統計出現幾次
        }

        ///(6) Output之前要照字母排序
        ///(7) Output
    }
}
