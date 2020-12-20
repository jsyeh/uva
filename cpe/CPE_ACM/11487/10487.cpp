//2011-12-05 09:21 start programming
//09:30 stop for meeting

#include <iostream>
using namespace std;

char ans[1002];
char fib[3][1002];
void add(char * a1, char* a2, char* sum)
{
	int i;
	int carry=0;
	for(i=0; a1[i]!='\0' && a2[i]!='\0'; i++){
		sum[i]=a1[i]-'0'+a2[i]-'0'+carry;
		if(sum[i]>10){
			sum[i]-=10;
			carry=1;
		}
		sum[i]+='0';
	}
	for(
}
int main()
{
	int n;
	while(cin>>n){

	}
	return 0;
}
