//2011-07-08 03:13 start study
//03:14 input ok, study rules
//03:16 table lookup is enough
//03:21 finish the code (be careful for repeated letters)
#include <iostream>
using namespace std;

char word[30];
//           {A B C D E F G H I J K L M N O P Q R S T U V W X Y Z}
int rule[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2};
int main()
{
	while(1){
		cin>>word;
		if(cin.eof())break;
		int prev=0;
		for(int i=0;word[i]!='\0';i++){
			int now=rule[word[i]-'A'];
			if(now!=0 && now!=prev){
				cout<<now;
			}
			prev=now;
		}
		cout<<endl;
	}
	return 0;
}