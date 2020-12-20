#include <stdio.h>
///char line[1003];
char line[2000];///習慣浪費
int freq[255];
int main()
{
    int lineN=1;///第一行前面不用印 跳行
    while(1){
        if(gets(line)==NULL) break;
        if(lineN>1) printf("\n");///第一行前面不用印 跳行 (lineN>1要印)
        lineN++;

        for(int i=0;i<255;i++){
            freq[i]=0;
        }///每次清0,等一下要統計
        for(int i=0; line[i]!='\0'; i++){///字串結尾是 '\0'
            char now = line[i];///只要 不是結尾, 就統計
            freq[now]++;
        }///統計
        int ASCII[255];
        for(int i=0;i<255;i++) ASCII[i]=i;///把ASCII的字母塞在自己裡面

        for(int i=0;i<255;i++){///大一教的2層loop的 "選擇排序"
            for(int j=i+1; j<255; j++){///It is (SelectionSort)
                if(freq[i] > freq[j]){
                    int temp=freq[i];///交換 freq
                    freq[i]=freq[j];
                    freq[j]=temp;
                    temp=ASCII[i];///交換ASCII
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }
            }
        }
        for(int i=0;i<255;i++){
            if(freq[i]!=0) printf("%d %d\n", ASCII[i], freq[i]);
        }
    }
}
