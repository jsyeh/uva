//2011-10-21 13:25 study the problem
//13:26 start programming
//13:28 input ok
//13:34 finish the code
//13:36 format ok, but all zero. debuging
//13:42 max=now vs. now=max (error!!)
//13:44 run-time error
//13:46 be careful for those bigger than array size!
//13:48 correct all array[n] if n>=1000000
//13:54 take a rest. 

#include <iostream>
using namespace std;
int array[1000000];

int len(int n)
{
	int oldn=n;
	if(n==1)return 1;
	int ans=0;
	while(1){
		if(array[n]!=-1) return array[n]+ans;
		if(n%2==1){
			n=n*3+1;
		}else{
			n=n/2;
		}
		ans++;
	}
	array[oldn]=ans;
	return ans;
}
int len_recursive(int n)
{
//	cout<<n<<"---"<<endl;
	if(n==1) return 1;
	if(n<1000000 && array[n]!=-1) return array[n];
	int ans;
	if(n%2==1){
		ans=len(3*n+1)+1;
	}else{
		ans=len(n/2)+1;
	}
	if(n<1000000)array[n]=ans;
	return ans;
}
int main()
{
	int a,b;
	for(int i=0;i<1000000;i++){
		array[i]=-1;
	}
	array[1]=1;
	while(cin>>a>>b){
		//cout<<a<<' '<<b<<endl;
		int olda=a,oldb=b;
		if(a>b)swap(a,b);
		int max=0;
		for(int i=a;i<=b;i++){
			int now=len(i);
			//cout<<now<<"==="<<endl;
			if(now>max)max=now;
		}
		cout<<olda<<' '<<oldb<<' '<<max<<endl;
	}
	return 0;
}
