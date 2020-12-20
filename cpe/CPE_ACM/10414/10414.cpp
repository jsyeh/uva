//2011-09-16 13:19 start
//13:25 not ok.
//13:38 found the bug for 10000000*10000000 is not 100000000000000
//13:45 ok 
#include <iostream>
using namespace std;

char name[9][10]={"kuti","lakh","hajar","shata","kuti","lakh","hajar","shata"," "};
long long int bound[9]={
100000000000000,
1000000000000,
10000000000,
1000000000,
10000000,
100000,
1000,
100,
0};

int main()
{
	int tc=1;
	long long int n;
	while(1){
		cin>>n;
		if(cin.eof())break;
		cout<<tc<<".";
		for(int d=0;d<8;d++){
			if(n>=bound[d]){
				cout<<" "<<(n/bound[d]);
				cout<<" "<<name[d];
				n=n%bound[d];
			}
		}
		cout<<" "<<n;
		cout<<endl;
		tc++;
	}
	return 0;
}
