#include <stdio.h>
int fib[100];
int main()
{
    ///(3) Fibonacci
    fib[0]=1; fib[1]=1;
    for(int i=2;i<40;i++){
        fib[i] = fib[i-1] + fib[i-2];
        //printf("%d ", fib[i]);///���եΪ�, �ڭ̦����h�����F 100 000 000
    }
    int n;///(1) Input
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        int now;

        scanf("%d", &now);
        ///(2) Output
        printf("%d = ", now);
        ///(4) �� now ��for�j��,��X�ڭ̻ݭn�� 10100xxxx���Ʀr
        int has1=0;///�}�Y���S��1? �@�}�l�S��1����,�����n�L�X0
        for(int i=39; i>=1; i--){
            if(now >= fib[i]){
                printf("1");
                has1=1;
                now -= fib[i];
            } else if(has1==1) printf("0");
        }
        printf(" (fib)\n");
        ///printf("%d = %d (fib)\n", now, ans);
    }
}
