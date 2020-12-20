#include <iostream>
using namespace std;
inline long long int reverse(long long int input)
{
	long long int a1=input,a2=input%10;
	while(input/10>0){
		input=input/10;
		a2=a2*10+input%10;
	}
	return a2;
}
int main()
{
	int n;
	cin>>n;
	for(int c=0;c<n;c++){
		long long int input,times=0;
		cin>>input;
		while(1){
			long long int a2=reverse(input);
			if(a2==input)break;
			times++;
			input+=a2;
		}
		cout<<times<<' '<<input<<endl;
	}
	return 0;
}
