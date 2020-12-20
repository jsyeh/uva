#include <iostream>
using namespace std;
int table[10];
int main()
{
	int c,n;
	cin>>c;
	while(c-->0){
		cin>>n;
		if(n==1){cout<<"1"<<endl;continue;}
		for(int i=9;i>=2;i--){
			table[i]=0;
			while(n%i==0){
				table[i]++;
				n/=i;
			}
		}
		if(n>1){ cout<<"-1"<<endl; continue;}
		for(int i=2;i<=9;i++){
			while(table[i]>0){
				table[i]--;
				cout<<i;
			}
		}
		cout<<endl;
	}
	return 0;
}