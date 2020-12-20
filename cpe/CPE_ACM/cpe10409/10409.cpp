#include <iostream>
using namespace std;
int code[65536];
int main()
{
	int n;
	while(cin>>n){
		int a;
		for(int i=0;i<65536;i++) code[i]=0;
		for(int i=0;i<n;i++){
			cin>>a;
			code[a]++;
		}
		int min=-1;
		int mini=0;
		int count=0;
		for(int i=0;i<65536;i++){
			if(code[i]==0)continue;
			int sum=0;
			for(int j=0;j<65536;j++){
				int dist=(i>j)?(i-j):(j-i);
				sum+=code[j]*dist;
			}
			if(sum<min || min==-1){
				min=sum;
				mini=i;
				count=1;
			}else if(sum==min){
				count++;
			}
		}
		cout<<mini<<' '<<code[mini]<<' '<<count<<endl;
	}
	return 0;
}
