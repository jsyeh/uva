#include <stdio.h>
long long int matrix[200][200];///確認大小 N<=100
/// -2^32 ... +2^32, 比int大, 要用long long int
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int N;
        char s1[10], s2[10];
        scanf("%s %s %d", s1, s2, &N);/// 讀入 N = ?? 而且不怕跳行
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                scanf("%lld", &matrix[i][j]);///改成lld
            }
        }///讀入test data (matrix N x N)

        int bad=0;///一開始以為有對稱, 沒壞掉。不對稱, bad
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                ///printf("%lld ", matrix[i][j]);
                if(matrix[i][j]<0) bad=1;///陷阱
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
