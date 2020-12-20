#include <stdio.h>
char line[2000];///1002 Step01: Input
int main()
{///Step01: Input
    int t=1;
    while( scanf("%s",line)==1 ){
        int freq[256]={};///沒還出現,一堆0
        char ASCII[256];///Step04:對應的字母
        for(int i=0; i<256; i++) ASCII[i]=i;

        for(int i=0; line[i]!=0; i++){
            char c=line[i];///每出現一次
            freq[c]++;///Step05 計算頻率
        }///Step03: 字串的for迴圈,分析

        for(int i=0; i<256; i++){///Step06: 依規則排序,選擇排序法
            for(int j=i+1; j<256; j++){
                if(freq[i] > freq[j]){///小到大,反過來想
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;///交換
                    temp=ASCII[i];
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }else if(freq[i]==freq[j] && ASCII[i] < ASCII[j]){
                    int temp=freq[i]; ///字母序需要大到小
                    freq[i]=freq[j];
                    freq[j]=temp;
                    temp=ASCII[i];
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }
            }
        }
        if(t>1) printf("\n");///Step07: 第2筆之後,都要先印跳行
        for(int i=0; i<256; i++){
            if(freq[i]>0){
                printf("%d %d\n", ASCII[i], freq[i]);
            }
        }
        t++;
    }///Step02: Output
}
