#include <iostream>
using namespace std;
int array[20000];
int main()
{
	int n;
	while(cin>>n){
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		int max=-1;
		for(int i=0;i<n;i++){
			int sum=0;;
			for(int j=i;j<n;j++){
				sum+=array[j];
				if(sum>max)max=sum;
			}
		}
		if(max<=0){
			cout<<"Losing streak."<<endl;
		}else{
			cout<<"The maximum winning streak is "<<max<<"."<<endl;
		}
	}
	return 0;
}
