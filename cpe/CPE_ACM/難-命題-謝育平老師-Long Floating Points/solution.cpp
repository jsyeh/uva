#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long a,b,c;
	while(cin>>a>>b>>c){
		if(c==0){cout<<0<<endl;continue;}
		if(2*a>128){cout<<2*a<<endl;continue;}
		vector<long long> s(256);
		for(int k=0;c;c/=b)s[k++]=c%b;
		int d,h;
		for(d=1;d<2*a;d++){
			if((2*a)%d)continue;
			for(h=0;h+d<2*a;h++)if(s[h]!=s[h+d])break;
			if(h+d==2*a)break;
		}
		if(d==1&&s[0]==b-1)d=0;
		cout<<d<<endl;		
	}	
	return 0;
}