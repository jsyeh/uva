#include <stdio.h>
char line[2000];///1002 Step01: Input
int main()
{///Step01: Input
    int t=1;
    while( scanf("%s",line)==1 ){
        int freq[256]={};///�S�٥X�{,�@��0
        char ASCII[256];///Step04:�������r��
        for(int i=0; i<256; i++) ASCII[i]=i;

        for(int i=0; line[i]!=0; i++){
            char c=line[i];///�C�X�{�@��
            freq[c]++;///Step05 �p���W�v
        }///Step03: �r�ꪺfor�j��,���R

        for(int i=0; i<256; i++){///Step06: �̳W�h�Ƨ�,��ܱƧǪk
            for(int j=i+1; j<256; j++){
                if(freq[i] > freq[j]){///�p��j,�ϹL�ӷQ
                    int temp=freq[i];
                    freq[i]=freq[j];
                    freq[j]=temp;///�洫
                    temp=ASCII[i];
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }else if(freq[i]==freq[j] && ASCII[i] < ASCII[j]){
                    int temp=freq[i]; ///�r���ǻݭn�j��p
                    freq[i]=freq[j];
                    freq[j]=temp;
                    temp=ASCII[i];
                    ASCII[i]=ASCII[j];
                    ASCII[j]=temp;
                }
            }
        }
        if(t>1) printf("\n");///Step07: ��2������,���n���L����
        for(int i=0; i<256; i++){
            if(freq[i]>0){
                printf("%d %d\n", ASCII[i], freq[i]);
            }
        }
        t++;
    }///Step02: Output
}
