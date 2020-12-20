#include <iostream>
using namespace std;

//input has 10000 digit, 2^10000 is very large
//divied by large prime 131071
// which is 11111111111111111  (17x'1')
// use calc.exe to see the feature of this prime number
int main()
{
	char c;
	int now=0;
	int p=131071;
	while(cin>>c){
		if(c=='#'){
			//output answer
			if(now==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
			now=0;
		}else if(c=='1'){
			now=now*2+1;
		}else if(c=='0'){
			now=now*2;
		}
		now=now%p;
	}
	return 0;
}
