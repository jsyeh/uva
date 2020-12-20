#include<stdio.h>
int tree[1048580];///用array來表示tree 1048575
int node[1048580];///裡面0表示向左, 1表示向右
int bound[]={0,1,3,7,15,31,63,127,255,511,1023,2047,
4095,8191,16383,32767,65535, 131071,262143,524287,1048575};
int main()
{
//    int now=1;
//    for(int d=1; d<=20; d++){
//        printf("d:%d now(n*2+1):%d\n", d, now);
//        now = now*2+1;
//    }
    int T;
    scanf("%d", &T);
    for(int t=0;t<T;t++){
        int D, I;///暫時吧
        scanf("%d %d", &D, &I);
        for(int i=0;i<=bound[D];i++) node[i]=0;///一開始每個node都向左
        int now;
        for(int ball=1; ball<=I; ball++){
            now=1;///我只放一次球,
            for(int d=1; d<D; d++){/// <=D 變 <D
                if(node[now]==0){///left
                    node[now]=1-node[now];///0=>1, 1=>0
                    now=now*2;
                }else{
                    node[now]=1-node[now];///0=>1, 1=>0
                    now=now*2+1;
                }
            }
        }
        printf("%d\n", now);
    }
}
