#include <stdio.h>
#include <string.h>
char line[200][200];//放標準答案
char line2[200][200];//放選手的答案
char lineStandard[20000];//把答案合成很長的1行
char lineTeams[20000];//放合成很長的1行的答案
int main()
{//有6個2, 2行The answer is: => 3
//有2個3, //題目的 Input很沒規律!!!
	int run=1;
	int m,n;
	while( scanf("%d\n",&n)==1 ){
		if(n==0) break;
		lineStandard[0]='\0';//等下要用 strcat()來串字串
		lineTeams[0]='\0';//等下要用 strcat()來串字串
		int len=0;
		for(int i=0; i<n; i++){
			gets(line[i]);
			len += strlen(line[i]);
			strcat(lineStandard, line[i]);
			strcat(lineStandard, "\n");//gets會把\n省掉,加回去
		}
		//printf("==%s==", lineStandard);
		scanf("%d\n", &m);
		for(int i=0; i<m; i++){
			gets(line2[i]);
			strcat(lineTeams, line2[i]);
			strcat(lineTeams, "\n");//gets會把\n省掉,加回去
		}
		
		int accept=1;//先認為它們都沒壞掉
		for(int i=0; lineStandard[i]!=0 ; i++){//比較2個字串,是不是完全相同or字母相同
			if( lineStandard[i] != lineTeams[i]) accept=0;//只要有不同,就死!		
		}
		
		//我們把字串裡的空格先都去掉,便可以比較!!!
		int i2=0;
		for(int i=0; lineStandard[i]!=0; i++, i2++){
			char c = lineStandard[i];
			if(c==' ' || c=='\n' || c=='\t'){
				i2--;//退一格
			}else lineStandard[i2]=lineStandard[i];			
		}
		lineStandard[i2]='\0';
		//我們把字串裡的空格先都去掉,便可以比較!!!
		i2=0;
		for(int i=0; lineTeams[i]!=0; i++, i2++){
			char c = lineTeams[i];
			if(c==' ' || c=='\n' || c=='\t'){
				i2--;//退一格
			}else lineTeams[i2]= lineTeams[i];
		}
		lineTeams[i2]='\0';
		//printf("\n==%s==", lineStandard);
		//printf("\n==%s==", lineTeams);
		
		int presentation=1;
		for(int i=0; lineStandard[i]!=0; i++){
			if(lineStandard[i]!=lineTeams[i]) presentation=0;
		}
		
		
		if(accept==1) printf("Run #%d: Accepted %d\n", run, len);
		else if(presentation==1) printf("Run #%d: Presentation Error %d\n", run, len);
		else printf("Run #%d: Wrong Answer %d\n", run, len);
		run++;
	}
}