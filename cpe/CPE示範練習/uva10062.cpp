#include <stdio.h>
///char line[1003];
char line[2000];///�ߺD���O
int freq[255];
int main()
{
    int lineN=1;///�Ĥ@��e�����ΦL ����
    while(1){
        if(gets(line)==NULL) break;
        if(lineN>1) printf("\n");///�Ĥ@��e�����ΦL ���� (lineN>1�n�L)
        lineN++;

        for(int i=0;i<255;i++){
            freq[i]=0;
        }///�C���M0,���@�U�n�έp
        for(int i=0; line[i]!='\0'; i++){///�r�굲���O '\0'
            char now = line[i];///�u�n ���O����, �N�έp
            freq[now]++;
        }///�έp
        int ASCII[255];
        for(int i=0;i<255;i++) ASCII[i]=i;///��ASCII���r����b�ۤv�̭�

        for(int i=0;i<255;i++){///�j�@�Ъ�2�hloop�� "��ܱƧ�"
            for(int j=i+1; j<255; j++){///It is (SelectionSort)
                if(freq[i] > freq[j]){
                    int temp=freq[i];///�洫 freq
                    freq[i]=freq[j];
                    freq[j]=temp;
                    temp=ASCII[i];///�洫ASCII
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
