#include <stdio.h>
int GCD(int a, int b)
{///輾轉相除法,得到0,另一個是答案
	if(a==0) return b;
	if(b==0) return a;
	return GCD(b, a%b);
}
int main()
{
    while(1){
        int N=0;
        scanf("%d", &N);
        if(N==0) break;
        int sum=0;
        for(int i=1; i<N; i++){
            for(int j=i+1; j<=N; j++){
                sum+= GCD(i,j);
            }
        }
        printf("%d\n", sum);
    }
}
