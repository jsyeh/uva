#include <stdio.h>///2^20�٥i�H�� 2^10=1024, 1024*1024�i��
///int a[10000];///�Ʀr�Ӧh,����μɤO 2^100000 �Ӥj
int Possible[10000][100];///Possible[Level][�l��]
///�[��W�h: (�n���S���W�h...
///Idea: ���k,�㰣 %K ==0 �C�ӼƦr,�i�঳
int main()
{
    int M;
    scanf("%d", &M);
    for(int t=0; t<M; t++){
        int N,K;
        scanf("%d %d", &N, &K);
        ///�Marray
        for(int Level=0; Level<N; Level++){
            for(int mod=0; mod<K; mod++){
                Possible[Level][mod]=0;///�M�ťեժ�
            }
        }
        int now;
        scanf("%d", &now);///��0�h
        Possible[0][now%K]=1;///���
        for(int Level=1; Level<N; Level++){///��1�h����
            scanf("%d", &now);
            for(int mod=0; mod<K; mod++){
                if( Possible[Level-1][mod]==1 ){///�e�@�h�����
                    Possible[Level][(mod+now)%K]=1;///����
                    Possible[Level][(mod-now)%K]=1;///�k��
                }
            }
        }
        if( Possible[N-1][0]==1 )  printf("Divisible\n");     /// ???? �ण��Q K �㰣
        else printf("Not divisible\n");
    }
    return 0;
}
