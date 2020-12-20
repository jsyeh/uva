//2011-08-03 16:41 start study
//16:44 finish, 16:45 format ok
#include <iostream>
using namespace std;

#include <stdio.h>

int main()
{
	int n;
	char line[100];
	while(1){
		cin>>line;
		if(line[0]=='0' && line[1]=='x'){
			sscanf(line, "%x", &n);
			if(n<0)break;
			printf("%d\n", n);
		}else{
			sscanf(line, "%d", &n);
			if(n<0)break;
			printf("0x%X\n", n);
		}
	}
	return 0;
}

