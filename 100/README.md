UVA 100
=======

這個題目 3n+1 是在題目描述中, 介紹一個演算法的作法, 可以把 n 
這個數字, 跳來跳去。偶數時, 就n/2除一半, 奇數時, 就變 3\*n+1,
一直跳到n==1為止。

為了簡單理解, 程式就照著寫就好。寫一個 solve()函式, 利用函式呼叫函式(recursion)的技巧, 看呼叫幾次才結束。它會 return 呼叫的次數。

接下來, 在 main() 裡面, 就暴力逐一去試, 找到最長的 max length 就好了。

註: 這題應該可以加速, 像是使用 array 來存「曾經計算過的答案」等。但為了讓程式簡單一點/方便學生理解, 我就不做任何加速。

```C++
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
```