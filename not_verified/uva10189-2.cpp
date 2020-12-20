#include <stdio.h>
char line[200][200];
int ans[200][200];
void calcAns(int m, int n)
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;
        }
    }///分開寫,因為要確認有乾淨

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){///找星星 line[i][j]
            if(line[i][j]=='*'){
                for(int u=i-1; u<=i+1; u++){
                    if(u<0 || u>=m || v<0 || v>=n) continue;
                    for(int v=j-1; v<=j+1; v++){
                        ans[u][v]++;/// ex. ans[i-1][j-1]++; ans[i-1][j]++; ans[i-1][j+1]++;
                    }
                }
            }
        }
    }
}
int main()
{
    int m, n, t=1;
    while( scanf("%d %d", &m, &n) == 2 ){
        if(m==0 && n==0)break;
        for(int i=0; i<m; i++){
            scanf("%s", line[i]);
        }///(1) Input Ready

        calcAns(m,n);///(3)
        ///(2) Output
        if(t>=2) printf("\n");
        printf("Field #%d:\n", t);
        for(int i=0; i<m; i++ ){
            for(int j=0; j<n; j++){
                if(line[i][j]=='*')printf("*");
                else printf("%d", ans[i][j]);
            }
            printf("\n");
        }
        t++;
    }
}
