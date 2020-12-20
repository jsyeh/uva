#include <iostream>
using namespace std;
int array[20000];
int sum[40000];
int main()
{
	int n;
	int cn=1;
	while(cin>>n){
		int error=0;
		for(int i=0;i<40000;i++){
			sum[i]=0;
		}
		cin>>array[0];
		for(int i=1;i<n;i++){
			cin>>array[i];
			if(array[i]<=array[i-1]) error=99;
		}
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				int temp=array[i]+array[j];
				if(sum[temp]==0){
					sum[temp]=1;
				}else{
					error=99;i=n;j=n;
				}
			}
		}
		if(cn!=1)cout<<endl;
		if(error==0){
			cout<<"Case #"<<cn<<": It is a B2-Sequence."<<endl;
		}else{
			cout<<"Case #"<<cn<<": It is not a B2-Sequence."<<endl;
		}
		cn++;
	}
	return 0;
}
	
