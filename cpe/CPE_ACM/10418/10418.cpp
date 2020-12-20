#include <iostream>
using namespace std;
int n,m;
char array[200][200];

char test_mine(int i, int j)
{
	if(array[i][j]=='*') return '*';
	int mine=0;
	for(int ii=i-1;ii<=i+1;ii++){
		for(int jj=j-1;jj<=j+1;jj++){
			if(ii<0 || jj<0 || ii>=n || jj>=m){
				continue;
			}
			if(array[ii][jj]=='*')mine++;
		}
	}
	return mine+'0';
}
int main()
{
	int id=1;
	while(cin>>n>>m){
		if(n==0 && m==0)break;

		if(id!=1)cout<<endl;
		cout<<"Field #"<<id<<":"<<endl;
		id++;

		for(int i=0;i<n;i++){
			cin>>array[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				
				cout<<test_mine(i,j);
			}
			cout<<endl;
		}
	}
	return 0;
}
