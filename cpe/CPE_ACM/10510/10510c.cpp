#include <stdio.h>
int ans[1000008];
int main()
{
	int m,n,a,b;
	scanf("%d",&n);
	for(int c=0;c<n;c++){
		if(c!=0)printf("\n");
		scanf("%d",&m);
		for(int i=m-1;i>=0;i--){
			scanf("%d %d", &a,&b);
			ans[i]=a+b;
		}
		for(int i=0;i<m;i++){
			if(ans[i]>9){
				ans[i]-=10;
				ans[i+1]+=1;
			}
		}
		for(int i=m-1;i>=0;i--){
			printf("%d", ans[i]);
		}
		printf("\n");
	}
	return 0;
}