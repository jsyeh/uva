#include <stdio.h>

int main()
{
	for(int i=1;i<=10000;i++){
		if(i%2!=0 && i%5!=0){
			printf("%d\n",i);
		}
	}
	return 0;
}