#include <stdio.h>	

int main()
{
    long long int a,b;
    while (scanf("%lld%lld", &a, &b)==2) {
        long long int now = a;
        while (b-a>0) {
            //printf("=%d %d\n", b,a);
            b-=a;
            a++; now++;
        }
        printf("%lld\n", now);
    }
    
}

/*//2020-12-23 18:27-18:32導出公式, 18:36小數字OK,但10^15會出錯,太慢了
//18:49 卡住,不太想寫, 公式不可能錯啊
//19:04 發現 double 其實可以讀入 10^15
//19:09 原來是程式碼有個+號寫成-號
//19:11 又遇到邊界條件
//19:15 這題曾宏鈞用 for迴圈配減法, 我用for迴圈配乘法就超時
#include <stdio.h>
#include <math.h>
int main()
{//我猜這題,先用簡單的暴力法試試, 但因 d 是 10^15 所以要用 long long int且要用公式解
	int s;
	//long long int d;
	double d;
	//while( scanf("%d%lld", &s, &d)==2 ){
	while( scanf("%d%lf", &s, &d)==2 ){
		//梯形公式: (上底s+下底ans)*h/2 
		// h是 ans-s+1
		double d2=d;
		//printf("=%f=", d2);
		if(d<=s){
			printf("%d\n", s);
			continue;//這是補丁
		}
		double ans= -s + -(1-2*s)/2 +sqrt( (1-2*s)*(1-2*s)+8*d )/2;
		//double ans = sqrt( (1-2*s)*(1-2*s)+8*d )/2;
//		if( (s+ans)*(ans-s+1)/2 == d) printf("%.0f\n", ans);
//		else printf("%.0f\n", ans+1);
		printf("%.0f\n", ans);
		/* 直接導出公式解
		//18:40使用開根號,還是超時
		for(int ans= sqrt(d);   ; ans++){
			int area=(s+ans)*(ans-s+1)/2;
			int area2=(s+ans+1)*(ans+1-s+1)/2;
			if(area<d && d<=area2){
				printf("%d\n", ans+1);
				break;
			}
		}*/ /*
	}
}*/
