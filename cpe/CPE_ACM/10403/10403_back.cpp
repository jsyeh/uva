#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int n16=n;
	int count=0;
	int n16ans=0;
	while(n16>0){
		n16ans+=n16%10;
		n16ans*=16;
		n16/=10;
	}
	int count2=0;
	while(n16ans>0){
		if(n16ans%2==1)count2++;
		n16ans=n16ans/2;
	}


	while(n>0){
		if(n%2==1)count++;
		n=n/2;
	}
	printf("How many 1s? %d\n",count);
	printf("How many 1s in 0x16 version? %d\n", count2);
	return 0;
}