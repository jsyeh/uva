//2011-07-18 22:52 start study
// chaged from C++ iostream to C fgets
//22:14 finished
//22:25 finished again, understand that i need to sort by C++ sort
#include <stdio.h>

int table[110][10];
int penalty[110][10];
int parti[110];
int main()
{
	char line[200];
	int n;
	fgets(line,200,stdin);
	sscanf(line, "%d", &n);
	fgets(line,200,stdin);
	for(int c=0;c<n;c++){
		for(int i=0;i<110;i++)
		for(int j=0;j<10;j++){
			table[i][j]=-1;
			penalty[i][j]=0;
			parti[i]=0;
		}
		while(1){
			fgets(line, 200, stdin);
			if(feof(stdin))break;
			if(line[0]<'1')break;
			int user,id, time;
			char code;
			sscanf(line, "%d %d %d %c", &user, &id, &time, &code);
			if(code=='I'){
				penalty[user][id]++;
				parti[user]=1;
			}
			if(code=='C' && table[user][id]==-1){
				table[user][id]=time;
				parti[user]=1;
			}
		}
		if(c>0)printf("\n");
		for(int i=0;i<110;i++){
			int solved=0;
			int totaltime=0;
			for(int j=0;j<10;j++){
				if(table[i][j]>-1){
					totaltime+=table[i][j]+penalty[i][j]*20;
					solved++;
				}
			}
			if(parti[i]>0){
				printf("%d %d %d\n", i,solved,totaltime);
			}
		}
	}
	return 0;
}
