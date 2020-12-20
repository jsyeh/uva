#include <stdio.h>
char gene[50][1010];
char table[5]="ACGT";
int main()
{
    int T, m, n;
    scanf("%d", &T);
    for(int t=0;t<T;t++){
        scanf("%d %d", &m,&n);
        for(int i=0;i<m;i++){
            scanf("%s", &gene[i]);
            ///printf("==%s=\n", gene[i]);
        }
        ///printf("====\n");
        int count=0;
        for(int k=0;k<n;k++){
            int ACGT[4]={0,0,0,0};
            for(int i=0;i<m;i++){
                if(gene[i][k]=='A')ACGT[0]++;
                if(gene[i][k]=='C')ACGT[1]++;
                if(gene[i][k]=='G')ACGT[2]++;
                if(gene[i][k]=='T')ACGT[3]++;
            }
            int big=ACGT[0];
            int ans=0;
            for(int i=1;i<4;i++){
                if(ACGT[i]>big){
                    big=ACGT[i];
                    ans=i;
                }
            }
            printf("%c", table[ans]);
            count+=(m-big);
        }
        printf("\n%d\n", count);
    }
}
