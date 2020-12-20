#include <iostream>
using namespace std;

int main()
{
	int n,cc,oldn;
	int n16=0;
	cin>>cc;
	for(int i=0;i<cc;i++){
		int count=0;
		cin>>oldn;
		n=oldn;
		while(n>0){
			if(n%2==1)count++;
			n=n/2;
		}
		cout<<count<<' ';
		count=0;
		n=oldn;
		n16=0;
		while(n>0){
			n16+=n%10;
			n16*=16;
			n/=10;
		}
		n=n16;
		while(n>0){
			if(n%2==1)count++;
			n/=2;
		}
		cout<<count<<endl;
	}
	return 0;
}