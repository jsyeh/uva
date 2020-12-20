//12:15 start
#include <iostream>
using namespace std;
int main()
{
	long long int newM,newF,oldM,oldF;
	int N;
	while(cin>>N){
		if(N==-1)break;
		oldM=0;oldF=0;
		newM=0;newF=0;//F¤£§tqueen	
		for(int i=0;i<N;i++){
			oldM=newM;
			oldF=newF;
			newM=oldF+oldM+1;
			newF=oldM;
		}
		//cout<<"M: "<<newM<<"F: "<<newF<<endl;
		cout<<newM<<' '<<newF+1+newM<<endl;
	}
	return 0;
}