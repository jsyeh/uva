#include <stdio.h>
long long int matrix[200][200];///�T�{�j�p N<=100
/// -2^32 ... +2^32, ��int�j, �n��long long int
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int N;
        char s1[10], s2[10];
        scanf("%s %s %d", s1, s2, &N);/// Ū�J N = ?? �ӥB���ȸ���
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                scanf("%lld", &matrix[i][j]);///�令lld
            }
        }///Ū�Jtest data (matrix N x N)

        int bad=0;///�@�}�l�H�������, �S�a���C�����, bad
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ///printf("%lld ", matrix[i][j]);
                if(matrix[i][j]<0) bad=1;///����
                if(matrix[i][j] != matrix[(N-1)-i][(N-1)-j]) bad=1;
            }
            ///printf("\n");
        }

        if(bad==0) printf("Test #%d: Symmetric.\n", t);
        else printf("Test #%d: Non-symmetric.\n", t);
    }
}
///N=4
///0
///1
///2
///3
///i vs. (N-1)-i
