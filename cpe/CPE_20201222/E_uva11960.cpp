#include <stdio.h>
int ans[1000009];
void updateAns()
{//用篩子法,好像也會超過時間
	for(int i=1; i<=1000000; i++){
		for(int k=i; k<=1000000; k+=i) ans[k]++;
	}//竟然沒超過時間, 帥啊!!!
}
int main()
{
	updateAns();
	int T,N;
	scanf("%d", &T);
	for(int t=0; t<T; t++){
		scanf("%d", &N);
		int max=0, good;
		for(int i=1; i<=N; i++){
			if( ans[i]>=max ){
				max=ans[i];
				good=i;
			}
		}
		printf("%d\n", good);
	}
}