//2011-07-20 14:47 start study
//14:51 finish, but Wrong Answer
//14:53 now test some special case
//14:55 finds 10 1 is 5.5 vs. 4.5 (float instead)
// submit again, but Wrong Answer again.
//14:58 show "impossible" for 5.4 vs. 4.5
//15:01 ok, submit again

#include <iostream>

using namespace std;

int main()
{
	unsigned int n,s,d;
	cin>>n;
	for(int c=0;c<n;c++){
		cin>>s>>d;
		int a=(s-d)/2.0;
		int b=s-a;
		if(a<b) swap(a,b);
		if(a-b!=d)
			cout<<"impossible"<<endl;
		else if(a<0 || b<0)
			cout<<"impossible"<<endl;
		else
			cout<<a<<" "<<b<<endl;
	}
	return 0;
}
