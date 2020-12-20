#include <stdio.h>
int main()
{
    int T=100;
    printf("%d\n", T);
    for(int t=0;t<T;t++){
        int N=100000;
        printf("%d\n", N);
        for(int i=0;i<N;i++){
            printf("%d\n", i/2);
        }
    }
}
