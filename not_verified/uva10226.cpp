#include <stdio.h>
char line[60];///�r���̦h30��, �G�N�j�@�I
char species[10000][32];///��Ƶ��c1
int total[10000];///��Ƶ��c2
int main()
{
    int n;
    scanf("%d", &n);
    gets(line);///�Ʀr�᭱���M���Ӹ���
    gets(line);///�}�l�@��^���W���e, �٦��Ӹ���
    for(int t=1; t<=n; t++){
        ///(1)Input���I��, �]�����Ů� �����scanf(), �n��gets()��fgets()
        ///�p��, �ťզ�, ����, �|�ܷ�

        ///(5)�bŪ�i�Ӥ��e, �A����Ƶ��c�n�M��
        ///�bŪ���ɭ�, 1,000,000��, �ӥB�����Ъ�, unique�u��10,000
        while(1){
            gets(line);///���I, �@���@���
            printf("==%s==\n", line);
            ///(2) �n����Ƶ��c,�n�s10,000�Ӥ��P����W,
            ///(3) �n���sŪ�i�Ӫ���W,���S������
            ///(4) �έp�X�{�X��
        }

        ///(6) Output���e�n�Ӧr���Ƨ�
        ///(7) Output
    }
}
