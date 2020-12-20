//2011-10-21 14:21 start programming, fib fist
//14:25 start table lookup
//14:31 almost ok, but bit error
//14:33 modify for-loop and got correct!
#include <iostream>
using namespace std;

int array[1000000];
int main()
{
	int n,input,ans;
	cin>>n;
	array[0]=0;array[1]=1;
	for(int i=2;i<1000000;i++){
		array[i]=array[i-1]+array[i-2];
	}
	for(int c=0;c<n;c++){
		cin>>input;
		int big=0;
		for(big=0;array[big]<=input;big++){
		}
		int current=input;
		cout<<input<<" = ";
		for(int i=big-1;i>1;i--){
			if(current>=array[i]){
				cout<<'1';
				current-=array[i];
			}else{
				cout<<'0';
			}
		}
		cout<<" (fib)"<<endl;
	}
	return 0;
}
