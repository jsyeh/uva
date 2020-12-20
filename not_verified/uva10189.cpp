#include <stdio.h>
char input[200][200];///–Ω常秨ㄇ
int ans[200][200];
void calcAns(int m, int n)
{///р ans[200][200]睲0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;///秨﹍常⊿ヴ筽戈癟
        }
    }
    for(int i=0;i<m;i++){///筽,ウ㏄常++
        for(int j=0;j<n;j++){
            if(input[i][j]=='*'){
                ///筽,ウ㏄常++
                for(int u=i-1; u<=i+1; u++){
                    if(u<0 || u>m) continue;
                    for(int v=j-1; v<=j+1; v++){
                        if(v<0 || v>n) continue;
                        ans[u][v]++;
                    }
                }
            }
        }
    }
}
int main()
{   ///(1) Input
    int m, n, t=1;
    while( scanf("%d %d", &m, &n) == 2 ){
        if(m==0 && n==0) break;///0 0璶挡
        for(int i=0; i<m; i++){
            scanf("%s", input[i] );
        }

        calcAns(m, n);///(3)ユ倒иㄧΑㄓ矪瞶

        ///(2)絤策块 test case
        if(t>=2) printf("\n");
        printf("Field #%d:\n", t);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(input[i][j]=='*') printf("*");
                else printf("%d", ans[i][j]);
            }
            printf("\n");
        }
        t++;
    }
}
