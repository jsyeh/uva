#include <stdio.h>
long long int matrix[200][200];///���O�@�I,�w��
int main()
{///(1) Input
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int n;
        scanf("\nN = %d", &n);///������
        ///char str1[10], str2[10];
        ///scanf("%s %s %d", str1, str2, &n);

        int bad=0;///�@�}�l�٨S�a, �٦����|
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld", &matrix[i][j]);
                if( matrix[i][j] <0) bad=1;///�t? �a�F
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                if( matrix[i][j] != matrix[n-1-i][n-1-j] ) bad=1;///�۵��~��, ���۵�,bad!
            }
        }

        ///(2) Output
        if(bad==0) printf("Test #%d: Symmetric.\n", t);
        else printf("Test #%d: Non-symmetric.\n", t);
    }
}
