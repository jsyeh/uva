//2011-07-05 07:23 start programming
//07:24 input ok, think about 11's rule
// (sum(odd digit) -sum(even digit)) %11==0
//07:25 restart again
//07:31 be careful for line[i]-'0'
//07:31 finish the code

#include <iostream>
using namespace std;

char line[2000];

int mod11(char *line)
{
	int sumodd=0,sumeven=0;
	for(int i=0;line[i]!=0;i++){
		if(i%2==0){
			sumeven+=line[i]-'0';
		}else{
			sumodd+=line[i]-'0';
		}
	}
//printf("sumodd: %d sumeven: %d mod11: %d\n", sumodd, sumeven, (sumodd-sumeven)%11);
	if((sumodd-sumeven)%11==0)
		return 0;
	else
		return 1;
}
int main()
{
	while(1){
		cin>>line;
		if(cin.eof())break;
		if(mod11(line)==0)
			cout<<line<<" is a multiple of 11."<<endl;
		else
			cout<<line<<" is not a multiple of 11."<<endl;
	}
	return 0;
}
