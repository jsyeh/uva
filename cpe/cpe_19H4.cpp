#include <stdio.h>
#include <ctype.h>
char grid[60][60];///�}�j�@�I, ���|����
int m, n;
void findAndPrint(char line[60])
{///����line �̪��r��, ���ܤj�g��
    for(int k=0; line[k]!='\0'; k++){
        if(islower(line[k])) line[k] = toupper(line[k]);
    }

    for(int i=1; i<=m; i++){
        for(int j=1; j<n; j++){
            ///�p�G��쵪��, �N�L����, �Breturn���}���禡
            int bad=0;///1: ���k
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i][j+k] ){
                    bad=1; break;///���P�Nbreak;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///2: ����
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i][j-k] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///3: ���W
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i-k][j] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///4: ���U
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i+k][j] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///5: ���k�W
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i-k][j+k] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///6: ���k�U
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i+k][j+k] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///7: �����W
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i-k][j-k] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
            bad=0;///8: �����U
            for(int k=0; line[k]!='\0'; k++){
                if( line[k]!=grid[i+k][j-k] ){
                    bad=1; break;
                }
            }
            if(bad==0){
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        scanf("%d%d",&m,&n);
        for(int i=1; i<=m; i++){///�|�P �N �[�W��L sentinal(?)
            scanf("%s", grid[i]+1);///�p��...
            for(int j=1;j<=n;j++){
                if( islower(grid[i][j]) ) grid[i][j]=toupper(grid[i][j]);
            }
        }
        for(int i=0; i<=m+1; i++){
            grid[i][0]=0;
            grid[i][n+1]=0;
        }
        for(int j=0; j<=n+1; j++){
            grid[0][j]=0;
            grid[m+1][j]=0;
        }

        int k;
        scanf("%d", &k);
        for(int i=0; i<k; i++){
            char line[60];
            scanf("%s", line);

            findAndPrint(line);
        }
    }
    return 0;
}
