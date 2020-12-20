#include <stdio.h>
int main()
{
	float max1,max2,temp;
	int i;
	printf("Please input 10 numbers.\n");
	scanf("%f %f", &max1, &max2);
	if(max1<max2){temp=max1;max1=max2;max2=temp;}
	for(i=0;i<8;i++){
		scanf("%f", &temp);
		if(temp>max1){max2=max1;max1=temp;}
		else if(temp>max2){max2=temp;};
	}
	printf("The biggest 2 numbers are: %f %f\n", max1, max2);
	return 0;
}
	