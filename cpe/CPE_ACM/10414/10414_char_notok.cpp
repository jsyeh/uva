//2011-09-16 12:55 start programming
//12:57 input ok
//13:00 table ok
//13:06 for ok
//13:11 digit for-loop testing
#include <iostream>
using namespace std;

char name[8][10]={"kuti","lakh","hajar","shata","kuti","lakh","hajar","shata"};
int N[9]={14,12,10,9,7,5,3,2,0};
//fedcba987654321

int main()
{
	char line2[20];
	char *line=line2;
	int tc=1;
	while(1){
		cin>>line2;
		line=line2;
		if(cin.eof())break;

		cout<<tc<<".";
//cout<<line<<endl;
		for(int d=0;d<8;d++){
			int len=strlen(line);
			if(len<N[d] && len>=N[d+1]){
				cout<<" ";
				for(int i=N[d]-1;i>=N[d+1];i--){
					cout<<line[len-i];
				}
				cout<<" "<<name[d];
			}
			line=line+(N[d]-N[d+1]);
		}
	}
	return 0;
}
