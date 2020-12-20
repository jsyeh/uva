#include <stdio.h>
char input[200][200];///�C�����}�j�@��
int ans[200][200];
void calcAns(int m, int n)
{///���� ans[200][200]�M��0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;///�@�}�l���S����a�p��T
        }
    }
    for(int i=0;i<m;i++){///�ݨ�a�p��,�����|�P��++
        for(int j=0;j<n;j++){
            if(input[i][j]=='*'){
                ///�ݨ�a�p��,�����|�P��++
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
        if(m==0 && n==0) break;///0 0�n����
        for(int i=0; i<m; i++){
            scanf("%s", input[i] );
        }

        calcAns(m, n);///(3)�浹�ڭ̪��禡�ӳB�z

        ///(2)�m�߿�X test case
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
