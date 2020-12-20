//2011-05-18 09:17
//09:21 finish coding
//09:23 presentation error
//09:25 solve k>1 problem
#include <stdio.h>

int main()
{
	int n,k;
	while(scanf("%d %d",&n,&k)==2){
		int ans=n;
		if(k>1){
			while(n/k>0){
				int back=n/k;
				ans+=back;
				n=n%k+back;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}