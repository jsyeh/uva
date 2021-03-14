//UVA 100, 2021/03/14 18:25 https://github.com/jsyeh/uva/100
//Author: Jeng-Sheng Yeh 葉正聖 https://github.com/jsyeh/uva
#include <stdio.h>
int solve(int n) 
{ //利用函式呼叫函式的技巧, 才找答案,每次長度多1
	if(n==1) return 1;
	if(n%2==1) return 1+solve(3*n+1);
	else return 1+solve(n/2);
}
int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b)==2 ){
		printf("%d %d ", a, b);//先印 a b
		if(a>b){ //因不確定 a b 的大小, 所以調一下
			int temp=a;
			a=b;
			b=temp;
		}//確認讓 a小, b大, 下面for迴圈才會正確
		int max=0;//max存答案 (最長長度)
		for(int i=a; i<=b; i++){//a...b之間的數
			int len=solve(i);   //全部都試過一次
			if(len>max) max=len;//存下最長的長度
		}
		printf("%d\n", max);
	}
}
