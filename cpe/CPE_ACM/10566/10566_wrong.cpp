//2011-09-23 12:56 start programming
//13:00 finish
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x1,x2,y1,y2;
	float vx, vy;
	while(1){
		cin>>x1>>y1>>x2>>y2;
		if(cin.eof())break;
		vx=x1-x2;
		vy=y1-y2;
		cin>>x1>>y1>>x2>>y2;
		cout<<fixed<<setprecision(3)<<(x2+vx)<<" "<<(y2+vy)<<endl;
	}
	return 0;
}
			