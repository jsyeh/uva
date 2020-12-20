#include <stdio.h>
char line[2000];
int main()
{
    int lineN=1;
    while(1){
        if( gets(line) == NULL) break;

        if(lineN>1) printf("\n");
        lineN++;

        int freq[255];///一開始都要逐一清0
        for(int i=0;i<255;i++) freq[i]=0;

        for(int i=0; line[i] != '\0'; i++){
            char now = line[i];
            freq[now]++;
        }
        int ASCII[255];
        for(int i=0;i<255;i++) ASCII[i] = i;

        for(int i=0;i<255;i++){
            for(int j=i+1; j<255; j++){
                if( freq[i] > freq[j] ){
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;

                    temp=ASCII[i];
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }
            }
        }

        for(int i=0;i<255;i++){
            if(freq[i]!=0) printf("%d %d\n",ASCII[i],freq[i]);
        }
    }
}
