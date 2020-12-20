#include <stdio.h>
int fib[100]={1,1};///(3)技巧,前2項都放1,後面補0
int main()
{///(3) Fibonacci
    for(int i=2; i<40; i++){///小心, 40是之前測出,沒有負
        fib[i] = fib[i-1] + fib[i-2];
    }
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        ///(1) Input
        int now;
        scanf("%d", &now);

        ///(2) Output
        printf("%d = ", now);
        int has1=0;///為了把前面的0不要印
        for(int i=39; i>=1; i--){///為什麼i>=1是因為發現有重覆項
            if( now >= fib[i]){///如果數字剩的還夠大,就掉那項
                now -= fib[i];
                printf("1");
                has1=1;
            }else if(has1==1) printf("0");
        }
        printf(" (fib)\n");
    }
}
