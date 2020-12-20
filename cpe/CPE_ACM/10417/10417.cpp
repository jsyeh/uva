//2011-06-19 02:44 start study the problem
// 02:46 10^15 is bigger than int, use long long
//02:47-02:55 my baby is crying, stop
//02:58 I understand the problem
// S, S+1, S+2, S+3... S+n,
// Find n in D day
// use Pascal's method in 5 year-old.
// be careful, D<10^15, don't use minus,
//03:04 use cin and cin.eof() for longlong
//03:13 use double instead.
// I waste many time for the equation
//03:18-19 boundary problem, baby crying
// I need to restart!
//03:23 finish the code
#include <math.h>
#include <iostream>
using namespace std;

void ans(double s,double d)
{
//n(f)=(-s+sqrt(s*s)/(2*0.5)
	double a=0.5;
	double b=(2*s-1)/2;
	double c=-d;
	double ans= (-b+sqrt(b*b-4*a*c))/(2*a);
	//cout<<ans<<endl;
	long long i=(long long)ans;
	if(ans-i>0)
		cout<<s+i<<endl;
	else
		cout<<s+i-1<<endl;

}
int main()
{
	double s,d;
	while(1){
		cin>>s>>d;
		//cout<<s<<" "<<d<<endl;
		if(cin.eof())break;
		//f(n)<d<f(n+1)
		//f(n)=(s+s+n)*n/2=0.5*n*n+s*n
		//n(f)=(-s+sqrt(s*s)/(2*0.5)
		ans(s,d);
	}
	return 0;
}

