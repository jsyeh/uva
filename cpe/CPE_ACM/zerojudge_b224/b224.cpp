#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
queue <int> nextX, nextY, stepN;
int n, width;
char grid[102][102];
bool walked[102][102];
bool gotMouse=false;
void test(int i, int j, int step){
	//cout<<"i:"<<i<<" j:"<<j<<" step:"<<step<<endl;
	if(gotMouse==true){
		while(! nextX.empty()){
			stepN.pop();
			nextX.pop();
			nextY.pop();
		}
	}
	if(i<0 || j<0 || i>=n || j>=width) return;
	if(grid[i][j]=='#') return ;
	if(grid[i][j]=='@') {
		cout<<step<<endl;//Got the mouse
		gotMouse=true;
		return ;
	}
	if(grid[i][j]=='.' && walked[i][j]==false){
		nextY.push(i);
		nextX.push(j);
		stepN.push(step);
		walked[i][j]=true;
	}
}
int main()
{
	while(cin>>n){
		if(n==0)break;
		cin.getline(grid[0], 102);
		gotMouse=false;
		for(int i=0;i<n;i++){
			cin.getline(grid[i], 102);
			for(int j=0;j<101;j++)walked[i][j]=false;
		}
		width=strlen(grid[0]);
		for(int i=0;i<n;i++){
			for(int j=0;j<width;j++){
				if(grid[i][j]=='K'){
					nextY.push(i);
					nextX.push(j);
					stepN.push(0);
					walked[i][j]=true;
				}
			}
		}
		while( ! nextY.empty()){
			int i=nextY.front();
			int j=nextX.front();
			int step=stepN.front();
			nextY.pop(); nextX.pop(); stepN.pop();
			test(i+1,j, step+1);
			test(i-1,j, step+1);
			test(i,j+1, step+1);
			test(i,j-1, step+1);
		}
		if(gotMouse==false) cout<<"= =\""<<endl;
	}
	return 0;
}
