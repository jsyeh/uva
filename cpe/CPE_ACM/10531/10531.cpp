#include <iostream>
#include <cstdlib>
using namespace std;

char line[10000][300];
char *dict[10000];//pointer of sorted dictionary
int dictN;

int cmp(const void* pt1, const void* pt2)
{
	int diff=strcmp((char*)pt1,(char*)pt2);
	return diff;
}
int main()
{
	int n;
	int first=1;
	while(cin>>n){
		for(int i=0;i<10000;i++){
			cin>>line[i];
			dict[i]=line[i];
			if(strcmp("EndOfText", line[i])==0){
				dictN=i;
				break;
			}
		}
cout<<"dictN: "<<dictN<<endl;
for(int i=0;i<dictN;i++) cout<<'|'<<dict[i]<<'|';
cout<<"befoe qsort"<<endl;
		qsort(dict,dictN,sizeof(char*),cmp);
for(int i=0;i<dictN;i++) cout<<'|'<<dict[i]<<'|';
cout<<"after qsort"<<endl;
		//calculate the frequence and output 
		if(first==1){
			first=0;
		}else{
			cout<<endl;
		}
		int count=0;
		int same=1;
		for(int i=1;i<dictN; i++){
			if(strcmp(dict[i-1],dict[i])==0){//same++
				same++;
			}else{//differentword
				if(same==n){
					cout<<dict[i-1]<<endl;
					count++;
				}
				same=1;
			}
		}
		if(same==n){//for the word of the last one
			cout<<dict[dictN-1]<<endl;
			count++;
		}
		if(count==0){
			cout<<"There is no such word."<<endl;
		}
	}
	return 0;
}
