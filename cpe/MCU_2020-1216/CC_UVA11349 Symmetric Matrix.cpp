#include <stdio.h>
int a[200][200];///Step03: �}�C
int main()
{
    int T, N;
    scanf("%d", &T);///Step01: Input
    for(int t=1; t<=T; t++){
        scanf("\nN = %d", &N);///Step03: �S��Ū�k
        for(int i=0; i<N; i++){///Ū�J�}�C
            for(int j=0; j<N; j++){
                scanf("%d", &a[i][j]);
            }
        }

        int bad=0;///Step04: �ˬd���S���a��
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                if(a[i][j] != a[N-1-i][N-1-j]) bad=1;
            }
        }
        ///Step06: Output
        if(bad==0) printf("Test #%d: Symmetric.\n", t);
        else printf("Test #%d: Non-symmetric.\n", t);
    }
}
