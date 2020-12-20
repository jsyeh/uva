//2011-12-19 17:10 start progamming
//17:13 input ok
//17:22 perfect table ok
//17:25 finish the code

#include <stdio.h>

char line[100];
int table[24*60];

int check_sym(int hh, int mm)
{
	char temp[10];
	sprintf(temp, "%02d%02d", hh,mm);
	int start=4;
	for(int i=0;i<4;i++){
		if(temp[i]!='0'){
			start=i;
			break;
		}
	}
	int perfect=1;
	for(int i=start,end=3;i<4;i++,end--){
		if(temp[i]!=temp[end]){
			perfect=0;
			break;
		}
	}
	return perfect;
}
void make_table()
{
	//make a table
	for(int i=0;i<24*60;i++){
		table[i]=0;
	}
	for(int i=0;i<24;i++){
		for(int j=0;j<60;j++){
			table[i*60+j]=check_sym(i,j);
//if(table[i*60+j]==1){//perfect
//printf("%02d:%02d perfect\n",i,j);
//}
		}
	}
}
int main()
{
	int n;
	make_table();

	scanf("%d", &n);
	while(n-->0){
		scanf("%s", &line);
		int HH=(line[0]-'0')*10+(line[1]-'0');
		int MM=(line[3]-'0')*10+(line[4]-'0');
		int now=HH*60+MM;
		for(int i=1;i<=24*60;i++){
			if(table[(i+now)%(24*60)]==1){
				int hh=((i+now)/60)%24;
				int mm=(i+now)%60;
				printf("%02d:%02d\n", hh,mm);
				break;
			}
		}
	}
	return 0;
}
