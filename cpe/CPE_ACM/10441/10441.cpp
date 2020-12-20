//2011-07-03 10:28 start study
//10:31 be careful for space
//10:37 cin.getline(line,255)
// But I am confused for the cin.eof()
//10:41 understand the calculation, continue programming
//10:50 finish the code but worry about output format
//10:52 find setprecision(2)
//11:03 I waste too much time for cout format, give up and use C printf instead
//11:04 finish the code (BUT presentation error)

#include <iostream>
using namespace std;
#include <stdio.h>

int f(int n)
{
	while(n>=10){
		int sum=0;
		while(n>0){
			sum+=n%10;
			n/=10;
		}
		n=sum;
	}
	return n;
}
	
float love(char *name)
{
	int sum=0;
	for(int i=0;name[i]!='\0';i++){
		if(name[i]>='a' && name[i]<='z'){
			sum+=name[i]-'a'+1;
		}
		if(name[i]>='A' && name[i]<='Z'){
			sum+=name[i]-'A'+1;
		}
	}
	return (float) f(sum);
}
int main()
{
	char name1[200],name2[200];
	while(1){
		cin.getline(name1,200);
		if(cin.eof())break;
		cin.getline(name2,200);
//cout<<name1<<"-"<<endl;
//cout<<name2<<"="<<endl;
		float love1=love(name1);
		float love2=love(name2);
//cout<<love1<<endl;
//cout<<love2<<endl;
		//cout.width(8);
		//cout.precision(2);

		float ans;
		if(love1>love2){
			ans=(love2/love1)*100;
		}else{
			ans=(love1/love2)*100;
		}
		//cout<<ans<<" %\n";
		printf("%.2f %%\n", ans);
	}
	return 0;
}