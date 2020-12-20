#include <iostream>
using namespace std;
char ans[1000003];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(i!=0)cout<<endl;
		int m,a,b;
		cin>>m;
		ans[m]='0';
		for(int d=m-1;d>=0;d--){
			cin>>a>>b;
			ans[d]=(a+b)%10+'0';
			ans[d+1]+=(a+b)/10;
		}
		for(int d=0;d<m;d++){
			if(ans[d]>'9'){
				ans[d+1]++;
				ans[d]-=10;
			}
		}
		if(ans[m]=='0'){
			ans[m]='\0';
		}else{
			ans[m+1]='\0';
			cout<<ans[m];
		}
		for(int d=m-1;d>=0;d--){
			cout<<ans[d];
		}
		cout<<endl;
	}
	return 0;
}
