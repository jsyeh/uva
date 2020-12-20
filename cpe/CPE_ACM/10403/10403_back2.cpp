#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int n16=0;
	while(n>0){
		n16+=n%10;
		n16*=16;
		n/=10;
	}
	n=n16;
	int count=0;
	while(n>0){
		if(n%2==1)count++;
		n=n/2;
	}
	printf("How many 1s in 0x16? %d\n",count);
	return 0;
}