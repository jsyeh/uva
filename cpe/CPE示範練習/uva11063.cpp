#include <stdio.h>
int main()
{
    int N, t=1;
    while( scanf("%d", &N) == 1 ){///�p�G���\Ū��@�ӼƦr, �N�iŪN�ӼƦr
        int b[100];
        for(int i=0;i<N;i++) scanf("%d", &b[i]);

        int used[20000];
        for(int i=0;i<20000;i++) used[i]=0;///�@�}�l���S���ιL

        int bad=0;///�@�}�l�S���a��
        for(int i=0;i<N;i++){
            for(int j=i+1; j<N;j++){
                int now = b[i]+b[j];///�{�b�[�X�Ӫ����Gnow
                if(used[now]==0) used[now]=1;
                else bad=1;///used[now]����p�G���e���Q�ιL,bad
            }
        }
        if(t>1) printf("\n");
        if(bad==0) printf("Case #%d: It is a B2-Sequence.\n", t);
        else printf("Case #%d: It is not a B2-Sequence.\n", t);
        t++;
    }
}
