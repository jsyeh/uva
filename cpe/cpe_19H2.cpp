#include <stdio.h>
int GCD(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return GCD(b, a%b);
}
int main()
{
    int N;
    while( scanf("%d", &N)==1  ){
        if(N==0) break;

        int G=0;
        for(int i=1;i<N;i++){
            for(int j=i+1;j<=N;j++){
                G+=GCD(i,j);
            }
        }
        printf("%d\n", G);
    }
    return 0;
}
