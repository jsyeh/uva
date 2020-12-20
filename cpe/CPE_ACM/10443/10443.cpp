//2011-08-08 08:45 start programming by C++

#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	int n;
	char line[100];
	while(1){
		cin>>line;
		if(line[0]=='0' && line[1]=='x'){
			sscanf(line, "%x", &n);
			if(n<0)break;
			cout<<dec<<n<<endl;
		}else{
			sscanf(line, "%d", &n);
			if(n<0)break;
			cout<<"0x"<<uppercase<<hex<<n<<endl;
		}
	}
	return 0;
}
