//2011-07-03 09:41 start programming
//09:44 finish coding
#include <iostream>
using namespace std;
int n;
void g(int n)
{
	while(n>=10){
		int sum=0;
		while(n>0){
			sum+=n%10;
			n=n/10;
		}
		n=sum;
	}
	cout<<n<<endl;
}
int main()
{
	while(1){
		cin>>n;
		if(n==0)break;
		g(n);
	}
	return 0;
}