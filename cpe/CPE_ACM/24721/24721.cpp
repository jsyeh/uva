#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
stack <int> dfsX, dfsY;//stacks for X and Y coordinates of each lake unit
char map[102][102], line[102];//102 is larger enough (99 raws/cols +2 sentinals)

void myPush(int x, int y){
	if(map[y][x]=='1') return;//if the map[][] is marked as 1, don't push it
	map[y][x]='1'; //if the map[][] is marked as 0, push it and mark it as 1
	dfsX.push(x);
	dfsY.push(y);
}

void myPop(){
	int x=dfsX.top(); dfsX.pop();
	int y=dfsY.top(); dfsY.pop();
	myPush(x+1,y);
	myPush(x-1,y);
	myPush(x,y+1);
	myPush(x,y-1);
}

int main(){
	
	int cn; cin>>cn;//total case number

	for(int c=0;c<cn;c++){//for each case

		//Step 1: Input row/col to test
		int row,col; cin >> row >> col;
		cin.getline(line, 102);//remove the end-of-line of initial row/col input
		int h=0,w=0;//map height and width

		//Step 2: Iput map
		while(cin.getline( (map[h+1]+1), 102)){//skip the 1-st raw and 1-st col
			if(map[h+1][1]=='\0')break;   //blank line means end of map
			h++;
		}

		//Step 3: Set Sentinals on map borders
		w=strlen(map[1]+1);//map width
		for(int i=0;i<w+2;i++){
			map[0][i]='1';
			map[h+1][i]='1';
		}//special sentinal skill, fill 1 for the bounding of map
		for(int i=0;i<h+2;i++){
			map[i][0]='1';
			map[i][w+1]='1';
		}//special sentinal skill, fill 1 for the bounding of map

		//Step 4: Important! Start DFS-loop
		int ans=0;
		myPush(col,row);//push-in the initial position
		while( !dfsX.empty()){ //if the stack is not empty, keep doing
			myPop(); ans++;//pop-out one and add one for answer(area)
		}

		//Step 5: Output answer
		if(c>0) cout<<endl;//output one blank line between each case
		cout<<ans<<endl;//output answer

	}//end of for-loop for each test case
	return 0;

}//end of main()
