#include <stdio.h> ///��s��: (1)�S�X�{���r�����ޥ�, (2)�n�Y����
char line[2000];
int main()
{
    while( scanf("%s", line) == 1){ ///(3)�� while(�j��) �i���ܦh�ծ@!
        int table[26]={};///(4)�}�C�ŧi�b�̭�, ���C�ծ�, �C�����M��
        for(int i=0; line[i]!=0; i++){
            char c=line[i];///�o�O�v�r�����R���j��
            if(c>='A' && c<='Z') table[ c-'A' ]++;///�ڤj�p�g�����Ҽ{�@
            if(c>='a' && c<='z') table[ c-'a' ]++;
        }
        int bad=0, prev=99999;///�ޥ�: prev ���e�̤j��(��L)
        for(int i=0; i<26; i++){///��s: �r���S�X�{��, ���L
            if( table[i]>0 ){///���X�{���r��,�~�h����P�_
                if( table[i]<prev ) prev=table[i];///�Y���֮�, ����!
                else bad=1;///�p�G�r���S���Y����, �N�a���F!
            }
        }
        if(bad==0) printf("It's a beautiful word.\n");
        else printf("It's not a beautiful word.\n");
    }
}
