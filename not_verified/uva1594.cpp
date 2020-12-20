#include <stdio.h>
int a[30];
int b[30];
int n;///ボ a[i]Τ碭
int nextPair()
{
    int zero=0;
    for(int i=0;i<n;i++){
        b[i] = a[i]-a[(i+1)%n];
        if(b[i]<0) b[i] = -b[i];///跑タ
        if(b[i]==0) zero++;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];///ㄓa[i]
    }
    if(zero==n) return 0;///good! ZERO! 场常琌0
    else return 1;///bad! 临⊿场常琌0
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
        int good=0;///临⊿Τ琌 good ZERO
        for(int k=0; k<1002; k++){
            if( nextPair() ==0){///眔 ZERO
                good=1;///good means it is ZERO
            }
        }
        if(good==1) printf("ZERO\n");
        else printf("LOOP\n");
    }
}
