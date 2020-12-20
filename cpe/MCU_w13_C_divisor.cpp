///18:42
#include <stdio.h>
///18:46
#include <math.h>
int divisorN(int n)
{
    int bound=sqrt(n);///18:48�Q�줧�e�ѹL, 18:50
    int ans=0;
    for(int i=1;i<=bound;i++){
        if(n%i==0)ans++;///���1�ӥ���
        if(n%i==0 && i*i!=n) ans++;///�D�����, �i�A�h1�ӥ��骺�v�l
    }
    return ans;
}
int main()
{
    int N;
    scanf("%d", &N);
    for(int t=0; t<N; t++){
        int a, b;
        scanf("%d %d", &a, &b);
        int ans=a, ansN=divisorN(a);
        for(int i=a+1; i<=b; i++){
            int now=divisorN(i);
            if(now>ansN){
                ans=i;
                ansN=now;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n", a, b, ans, ansN);
    }
}
