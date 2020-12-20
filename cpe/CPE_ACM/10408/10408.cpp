#include <stdio.h>

int main()
{
	int s,N,I;
	float p;
	scanf("%d", &s);
	while(s--){
		scanf("%d %f %d", &N, &p, &I);
		float x=1-p;
		float part1=1;
		for(int i=0;i<I-1;i++){
			part1*=x;
		}
		float Xn=1;
		for(int i=0;i<N;i++){
			Xn*=x;
		}
		float part2=p;
		float part3=1/(1-Xn);
		printf("%.4f\n", part1*part2*part3);
	}
	return 0;
}
