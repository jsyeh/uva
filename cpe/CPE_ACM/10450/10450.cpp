//2011-07-06 15:47 start study
//黃承達的問題
// 1. 程式沒有排版好(極為嚴重)
// 2. 應只要算一次質數,以後查表即可
//15:55 finish the code
//15:56 I got Wrong Answer! check again
//16:00 I forget the prime itself. for(...;i<=n;...)
#include <iostream>

using namespace std;

#define N 1000003
int prime[N];
int diffprime(int n)
{
	int ans=0;
	for(int i=2;i<=n;i++){
		if(prime[i]==1 && (n%i)==0){
			ans++;
		}
	}
	return ans;
}
int main()
{
	for(int i=0;i<N;i++){
		prime[i]=1;
	}
	for(int i=2;i<N;i++){
		if(prime[i]==1){
			for(int j=i+i;j<N;j+=i){
				prime[j]=0;
			}
		}
	}
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		int ans=diffprime(n);
		cout<<n<<" : "<<ans<<endl;
	}
	return 0;
}
