#include <iostream>
using namespace std;
double p[300];
double table[300][300];
int main()
{
	int n,k;
	while(cin>>n>>k){
		if(n==0)break;
		for(int i=1;i<=n;i++){
			cin>>p[i];
			table[i][0]=1-p[i];
			table[i][1]=p[i];
		}
		//this problem should use Linear Programming
		for(int i=2;i<=n;i++){
			for(int j=0;j<=n;j++){
				table[i][j]=table[i-1][j]*(1-p[i])+table[i-1][j-1]*p[i];
				// table[i][j] means, 1-i-th digit, just j's 1
			}
		}
		double sum;
		for(int i=k;i<=n;i++){
			sum+=table[i][k];
		}

		cout<<sum<<endl;
	}
	return 0;
}
