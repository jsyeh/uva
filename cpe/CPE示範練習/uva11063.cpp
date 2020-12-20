#include <stdio.h>
int main()
{
    int N, t=1;
    while( scanf("%d", &N) == 1 ){///如果成功讀到一個數字, 就可讀N個數字
        int b[100];
        for(int i=0;i<N;i++) scanf("%d", &b[i]);

        int used[20000];
        for(int i=0;i<20000;i++) used[i]=0;///一開始都沒有用過

        int bad=0;///一開始沒有壞掉
        for(int i=0;i<N;i++){
            for(int j=i+1; j<N;j++){
                int now = b[i]+b[j];///現在加出來的結果now
                if(used[now]==0) used[now]=1;
                else bad=1;///used[now]那格如果之前有被用過,bad
            }
        }
        if(t>1) printf("\n");
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n", t);
        else printf("Case #%d: It is not a B2-Sequence.\n", t);
        t++;
    }
}
