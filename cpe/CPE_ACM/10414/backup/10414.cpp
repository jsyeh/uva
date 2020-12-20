//2011-07-18 17:30 start study
// 1234 5678 9012 345
// 15 digits, double may be ok
// or use char[20] directly.
// 2,3,5,7 zeros
//17:43 finish, but debugging
//17:47 finish debug (n[i]-'0'), but
// higher digits are not ok. need to converted again.
// be careful for zero case, ex. 10000000000001
//17:54 心情有點亂,先放棄吧! 以後再做

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	char n[20];
	int id=0;
	while(1){
		id++;
		cin>>n;
		if(cin.eof())break;
		int len=0;
		for(len=0;;len++){
			if(n[len]>'9' || n[len]<'0')break;
		}
		int kuti=0,lakh=0,hajar=0,shata=0,one=0;
		for(int i=0;i<len;i++){
			if(len-i>7){
				kuti*=10;
				kuti+=n[i]-'0';
			}
			if(len-i<=7 && len-i>5){
				lakh*=10;
				lakh+=n[i]-'0';
			}
			if(len-i<=5 && len-i>3){
				hajar*=10;
				hajar+=n[i]-'0';
			}
			if(len-i<=3 && len-i>2){
				shata*=10;
				shata+=n[i]-'0';
			}
			if(len-i<=2){
				one*=10;
				one+=n[i]-'0';
			}
		}
		printf("%d.",id);
		if(kuti>0)printf(" %d kuti",kuti);
		if(lakh>0)printf(" %d lakh",lakh);
		if(hajar>0)printf(" %d hajar", hajar);
		if(shata>0)printf(" %d shata", shata);
		printf(" %d\n", one);
	}
	return 0;
}