#include <stdio.h>
long long int matrix[200][200];
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int n;
        scanf("\nN = %d", &n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld", &matrix[i][j]);
            }
        }///(1) Input OK
        ///(3) test bad(Ãa±¼) or not
        int bad=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]<0) bad=1;
                if(matrix[i][j] != matrix[n-1-i][n-1-j]) bad=1;
            }
        }
        ///(2)Output
        if(bad==0) printf("Test #%d: Symmetric.\n", t);
        else printf("Tesst #%d: Non-symetric.\n", t);
    }
}
