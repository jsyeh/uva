//2011-07-03 18:14 start programming
//18:23 finish the code
//2011-07-22 15:16 restart the code. prevent floating
//15:20 solve float problem, submit
#include <iostream>
using namespace std;

#define NN 2000000
int prime[NN];
int rev(int n)
{
	int sum=0;
	while(n>0){
		sum*=10;
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	for(int i=1;i<NN;i++){
		prime[i]=1;
	}
	for(int i=2;i<NN;i++){
		if(prime[i]==1){
			for(int d=i+i;d<NN;d+=i){
				prime[d]=0;
			}
		}
	}
	while(1){
		float nf;
		cin>>nf;
		if(cin.eof())break;
		n=nf;
		if(n!=nf){
			cout<<n<<" is not prime.\n";
			continue;
		}
		int n_rev=rev(n);

		if(prime[n]==0){
			cout<<n<<" is not prime.\n";
		}else if(prime[n]==1 && prime[n_rev]==0){
			cout<<n<<" is prime.\n";
		}else{
			cout<<n<<" is emirp.\n";
		}
	}
	return 0;
}