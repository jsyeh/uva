//2011-07-29 15:44 start study
//15:49 almost ok, now writing sort
//15:54 finish sort and the code

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

char line[2000];
int freq[255];
vector<int> ans(255);

bool cmp(int i, int j)
{
	if( freq[i]<freq[j])return true;
	if( freq[i]>freq[j])return false;
	if(i>j)return true;
	return false;
}
int main()
{
	int first=1;
	while(1){
		cin>>line;
		if(cin.eof())break;
		for(int i=0;i<255;i++){
			freq[i]=0;
			ans[i]=i;
		}
		for(int i=0;line[i]!='\0';i++){
			freq[line[i]]++;
		}
		sort(ans.begin(), ans.end(), cmp);
		if(first==1)
			first=0;
		else
			cout<<endl;
		for(int i=0; i<255;i++){
			if(freq[ans[i]]==0)continue;
			cout<<ans[i]<<" "<<freq[ans[i]]<<endl;
		}
	}
	return 0;
}		