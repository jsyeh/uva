#include <stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	int e,f,c;
	while( scanf("%d%d%d",&e,&f,&c)==3 ){
		int ans=0;//都空瓶
		int n=e+f;
		while( n>= c){
			ans+=n/c;
			n = n/c + n%c;
		}
		
		printf("%d\n", ans);
	}
}