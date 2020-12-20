//13:13 start
//13:19 error answer
//13:21 finish
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x[4],y[4];
	int centeri, centerj;
	while(1){
		for(int i=0;i<4;i++){
			cin>>x[i]>>y[i];
		}
		if(cin.eof())break;

		for(int i=0;i<4;i++)
		for(int j=i+1;j<4;j++){
			if(x[i]==x[j] && y[i]==y[j]){
				centeri=i;
				centerj=j;
			}
		}
		float ansx=0,ansy=0;
		for(int i=0;i<4;i++){
			if(i!=centeri && i!=centerj){
				ansx+=x[i]-x[centeri];
				ansy+=y[i]-y[centeri];
			}
		}
		cout<<fixed<<setprecision(3);
		cout<<(ansx+x[centeri])<<" ";
		cout<<(ansy+y[centeri])<<endl;
	}
	return 0;
}
