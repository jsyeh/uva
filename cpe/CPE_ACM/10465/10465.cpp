#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double vt, v0;
	while(cin>>vt>>v0){
		double max=0, discN=0,unique=0;
		if(vt==0 && v0==0)break;
//cout<<vt<<v0<<endl;
		for(int i=1;i<=vt;i++){
			double D=0.3*sqrt(vt/i -v0);
			double len=D*i;
//cout<<"len:"<<len<<endl;
			if(len==max){
				unique=0;
			}
			if(len>max){
				discN=i;max=len;
				unique=1;
			}
		}
		if(unique==0){
			cout<<0<<"unique"<<endl;
		}
		else cout<<discN<<endl;			
	}
	return 0;
}
