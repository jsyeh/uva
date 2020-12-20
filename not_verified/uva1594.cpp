#include <stdio.h>
int a[30];
int b[30];
int n;///表示 a[i]有幾個
int nextPair()
{
    int zero=0;
    for(int i=0;i<n;i++){
        b[i] = a[i]-a[(i+1)%n];
        if(b[i]<0) b[i] = -b[i];///變正的
        if(b[i]==0) zero++;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];///再放回去原來的a[i]
    }
    if(zero==n) return 0;///good! ZERO! 全部都是0
    else return 1;///bad! 還沒全部都是0
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);

        }
        int good=0;///還沒有是 good ZERO
        for(int k=0; k<1002; k++){
            if( nextPair() ==0){///可以得到 ZERO
                good=1;///good means it is ZERO
            }
        }
        if(good==1) printf("ZERO\n");
        else printf("LOOP\n");
    }
}
