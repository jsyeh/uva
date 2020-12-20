#include <stdio.h>
long long int matrix[200][200];///浪費一點,安心
int main()
{///(1) Input
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int n;
        scanf("\nN = %d", &n);///不推薦
        ///char str1[10], str2[10];
        ///scanf("%s %s %d", str1, str2, &n);

        int bad=0;///一開始還沒壞, 還有機會
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld", &matrix[i][j]);
                if( matrix[i][j] <0) bad=1;///負? 壞了
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0;j<n;j++){
                if( matrix[i][j] != matrix[n-1-i][n-1-j] ) bad=1;///相等才對, 不相等,bad!
            }
        }

        ///(2) Output
        if(bad==0) printf("Test #%d: Symmetric.\n", t);
        else printf("Test #%d: Non-symmetric.\n", t);
    }
}
