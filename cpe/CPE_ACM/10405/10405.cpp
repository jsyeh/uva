#include <iostream>
using namespace std;

int array[4000];
int main()
{
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			array[i]=0;
		}
		int a,b;
		cin>>a;
		int failed=0;
		for(int i=1;i<n;i++){
			b=a;
			cin>>a;
			int diff=a-b;
			if(diff<0)diff=-diff;
			if(diff>=n)failed=1;
			if(array[diff]==0){
				array[diff]=1;
			}else{
				failed=1;
			}
		}
		if(failed==1){
			cout<<"Not jolly\n";
		}else{
			cout<<"Jolly\n";
		}
	}
	return 0;
}