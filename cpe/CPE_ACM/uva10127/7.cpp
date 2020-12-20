//21:27 start programming and study
//21:49 I got the idea of this problem
// 111111111111 % n ==0, 比2^32還要大,真麻煩
//21:52 用餘數定理, 
// (k)%n=zzz
// (10k+1)%n = (zzz*10+1)%n
// if zzz==0, bingo
//21:57 finish
/*#include <stdio.h>

int main()
{
	long long n;
	while(scanf("%lld", &n)==1){
		printf("%lld--\n", n);
		long o=0;
		for(int i=1;i<64;i++){
			o=(o<<1)+1;
printf("++%d++\n",o);
			if(o%n==0){
				printf("o:%d %d\n", o,i);
				break;
			}
		}
	}
	return 0;
}
*/

#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d", &n)==1){
		int k=1, i=1;
		//printf("n:%d\n", n);
		while(1){
			if(k%n==0){
				break;
			}
			i++;
			k=(10*k+1)%n;
		}
		printf("%d\n", i);
	}
	return 0;
}