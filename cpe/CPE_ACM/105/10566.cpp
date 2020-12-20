#include <iostream>
using namespace std;

int main()
{
	//float x1,x2,x3,x4,y1,y2,y3,y4;
	float x[4], y[4];
	while(1){
		//cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
		for(int i=0;i<4;i++){
			cin>>x[i]>>y[i];
		}
		if(cin.eof())break;		
	}
	return 0;
}