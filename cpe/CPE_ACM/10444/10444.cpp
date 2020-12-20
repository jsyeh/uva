#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

//int array[10000];
//vector<int> array(10000);
bool cmp(int a, int b)
{
	return a<b;
}
int main()
{
	int tc=1;
	while(1){
		int N,Q;
		cin>>N>>Q;
		if(N==0 && Q==0)
			break;
		vector<int> array(N);
		for(int i=0;i<N;i++){
			cin>>array[i];
		}
		//sort
		sort(array.begin(), array.end(), cmp);
		//for(int i=0;i<N;i++){
		//	cout<<array[i]<<endl;
		//}
		cout<<"CASE# "<<tc<<":"<<endl;
		for(int i=0;i<Q;i++){
			int tt;
			cin>>tt;
			int found=0;
			for(int i=0;i<N;i++){
				if(array[i]==tt){
					cout<<tt<<" found at "<<i+1<<endl;
					found=1;
					break;
				}
			}
			if(found==0){
				cout<<tt<<" not found"<<endl;
			}
		}
		tc++;
	}
	return 0;
}