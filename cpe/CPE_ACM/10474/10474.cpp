//2011-06-19 02:29 start study problem
//02:31 I decide to use brute-force method
//02:36 finish the code
#include <stdio.h>

int main()
{
	int n,k;
	scanf("%d", &n);
	for(int c=0;c<n;c++){
		scanf("%d", &k);
		int findans=0;
		for(int a=0;a<300;a++)
		for(int b=a;b<300;b++)
		for(int c=b;c<300;c++){
			if(a*a+b*b+c*c==k){
				printf("%d %d %d\n",a,b,c);
				findans=1;
				a=300;b=300;c=300;
			}
		}
		if(findans==0){
			printf("-1\n");
		}
	}
	return 0;
}
