//360+360+90 + 360+90+90=1350
//360+360+180  +360+180+180=1620
//360+360+270 +360+270+270=1890
//所以是反方向標記數字

#include <iostream>
using namespace std;
//int clock(int now, int next)
int clock(int next, int now)
{
	int ans=0;
	if(next>now){
		ans+=(next-now)*360/40;
	}else{
		ans+=(40+next-now)*360/40;
	}
	return ans;
}
int main()
{
	int c[4];
	while(cin>>c[0]>>c[1]>>c[2]>>c[3]){
		if(c[0]==0 && c[1]==0 && c[2]==0 && c[3]==0) break;
		//for(int i=0;i<4;i++){
		//	cout<<c[i]<<' ';
		//}
		//cout<<endl;
		int ans=0;
		ans+=360+360;
		ans+=clock(c[0],c[1]);
		ans+=360+clock(c[2],c[1]);
		ans+=clock(c[2],c[3]);
		//printf("%d\n", ans);
		cout<<ans<<endl;
	}
	return 0;
}
