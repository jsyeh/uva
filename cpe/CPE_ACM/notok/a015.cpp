#include <iostream>
using namespace std;
int main()
{
	int ans=0;
	int ansA,ansB,ansC,ansD,ansE;
	for(int a=1;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				for(int d=0;d<10;d++){
					for(int e=0;e<10;e++){
						int abcde=a*10000+b*1000+c*100+d*10+e;
						int bbbbbe=b*111110+e;
						if(abcde*a==bbbbbe){
							ans=abcde;
							ansA=a;
							ansB=b;
							ansC=c;
							ansD=d;
							ansE=e;
						}
					}
				}
			}
		}
	}
	//cout<<ans;
	cout<<ansA<<' '<<ansB<<' '<<ansC<<' '<<ansD<<' '<<ansE;
	return 1 ;
}
