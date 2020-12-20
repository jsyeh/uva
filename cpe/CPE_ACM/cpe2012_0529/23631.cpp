#include <iostream>
using namespace std;
int ans[200];
int main()
{
	int n;
	for(int i=1;i<=100;i++){
		ans[i]=0;
	}
	for(int i=1;i<=100;i++){
		for(int size=1;size<=i;size++){
			ans[i]+=(i-size+1)*(i-size+1);
		}
	}
	while(cin>>n){
		if(n==0)break;
		cout<<ans[n]<<endl;
	}
	return 0;
}
