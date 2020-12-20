//2011-05-13 00:22 start programming after the idea
//00:28 finish coding, but have a bug about a2/a3
//00:40 find the correct a1,a2,a3,a4 inital value, finish coding
#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	for(int c=0;c<T;c++){
		int L,n;
		int a1,a2,a3,a4,x;
		scanf("%d %d", &L, &n);
		a1=L;a4=0;//be careful for only 1 ant case
		a2=0;a3=L;
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			if(x<a1)a1=x;
			if(x>a4)a4=x;
			if(x<L/2 && L/2-x<L/2-a2)a2=x;
			if(x>L/2 && x-L/2<a3-L/2)a3=x;
		}
		int minT=a2;
		if(L-a3>minT)minT=L-a3;
		int maxT=a4;
		if(L-a1>maxT)maxT=L-a1;
		printf("%d %d\n", minT, maxT);
	}
	return 0;
}