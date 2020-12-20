#include <iostream>
using namespace std;
char line[200];
int main()
{
	int n;
	cin>>n;
	cin.getline(line, 200, '\n');
	while(n--){
		cin.getline(line, 200, '\n');
		cout<<"aaa"<<line<<"bbb";
	}
	return 0;
}
