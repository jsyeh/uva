#include <stdio.h>
///�ڥ��Τ���֪���,�Ӥ�K�j�a�z��
///50 4 �w��50��, �U����4�ؿ��
///10 2 ��1���A10��, 2�I���N��
///10 3 ��1���A10��, 3�I���N��
///20 3 ��1���A20��, 3�I���N��
///40 4 ��1���A40��, 4�I���N��
int input1[5]={0, 10,10,20,40};
int input2[5]={0,  2, 3, 3, 4};
int table[6][51];///table[p][m]��� �Ҽ{p�ئ�A��, ��w��O money��, �̦n�����N�׬O�h��
int main()
{///���u�Τ@�����ո��,��K�j�a�z��
    int Money=50, N=4;///while( scanf("%d %d", &Money, &N)==2 )
    for(int m=0; m<=Money; m++){///m��ܦU�إi�઺�w��
        table[0][m]=0;///��l��,�S�R����ئ�A,���N�׬O0
    }
    for(int p=1; p<=N; p++){///�p�G�Ҽ{�ep���A
        int a = input1[p], b=input2[p];///a:��p���A����, b:��p���A�����N��
        for(int m=0; m<=Money; m++){///���P���`�w��, �n�M�wtable[p][m]����
            if( m-a<0) {
                table[p][m]=table[p-1][m];///�]��m�������R��p��,��������
                continue;
            }
            ///�p�G�n�Ҽ{�Y���A,�n���d�w��,����u�R/���R�v���t�O
            int tobuy=m-a;///�p�G�n�R, �n�d�� table[p-1][m-a]����, ���w�d���~��R
            if( m-a>=0 && table[p-1][m-a]+b>table[p-1][m]  ) table[p][m]=table[p-1][m-a]+b;///���󺡷N,�R,�ηs�����N��
            else table[p][m]=table[p-1][m];///���ȱo�R��p��,����
        }
    }
    int ans=table[4][50];
    printf("%d\n", ans);
}
