#include <stdio.h>
int fib[100]={1,1};///(3)�ޥ�,�e2������1,�᭱��0
int main()
{///(3) Fibonacci
    for(int i=2; i<40; i++){///�p��, 40�O���e���X,�S���t
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
        int has1=0;///���F��e����0���n�L
        for(int i=39; i>=1; i--){///������i>=1�O�]���o�{�����ж�
            if( now >= fib[i]){///�p�G�Ʀr�Ѫ��ٰ��j,�N������
                now -= fib[i];
                printf("1");
                has1=1;
            }else if(has1==1) printf("0");
        }
        printf(" (fib)\n");
    }
}
