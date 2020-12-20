#include<iostream>
using namespace std;
int main()
{
	int n,k;
	while(1)
	{
		
		cin>>n>>k;
		if(cin.eof())break;
		int m=n,x=n;
		while(x>=k)
		{
			m+=n/k;
			//x=n%k;
		//	cout<<m<<" "<<x<<endl;
			x=n%k+n/k;
			n=x;
		}
		cout<<m<<endl;
	}
	return 0;
}
