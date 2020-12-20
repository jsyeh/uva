//2011-05-23 11:37 start programming
// after understand the idea of 9-degree (times of sum9)
//11:46 finsih the code (degree9 function in 1 minute)
// Wrong Answer, 81 is 9-degree 2, not 1

#include <stdio.h>
#include <string.h>

char line[2000];
int degree9(int sum, int n)
{
	if(sum==9)return n;
	else if(sum<9)return 0;

	int nextsum=0;
	while(sum>0){
		nextsum+=sum%10;
		sum/=10;
	}
	return degree9(nextsum, n+1);
}
int main()
{
	while(scanf("%s", line)==1){
		if(line[0]=='0')break;
		int sum=0;
		for(int i=0;; i++){
			if(line[i]<'0' || line[i]>'9') 
				break;
			sum+=line[i]-'0';
		}
		int n;
		//if(strcmp("9",line)==0)n=1;
		//else n=degree9(sum,2);
		n=degree9(sum,1);
		if(n==0)
			printf("%s is not a multiple of 9.\n", line);
		else
			printf("%s is a multiple of 9 and has 9-degree %d.\n", line, n);
	}
	return 0;
}
