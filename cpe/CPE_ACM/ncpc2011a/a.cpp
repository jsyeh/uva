#include <iostream>
using namespace std;

int ans[300];
int a,b,s,t;
int main()
{
	while(cin>>a>>b>>s>>t){
		if(a==0)break;
		ans[1]=a;
		ans[2]=b;
		for(int i=1,o=3;o<=t;i++){
			int c=ans[i]*ans[i+1]/10;
			int d=ans[i]*ans[i+1]%10;
			if(c>0){
				ans[o++]=c;
			}
			ans[o++]=d;
		}
		for(int i=s;i<=t;i++){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}