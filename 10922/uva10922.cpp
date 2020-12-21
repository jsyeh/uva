//UVA 10922, 2018/05/28 17:18 https://github.com/jsyeh/uva/10922
//Author: Jeng-Sheng Yeh 葉正聖 https://github.com/jsyeh/uva
#include <stdio.h>
char line[2000];
int nineStr(char * str)
{
    int sum=0;
    for(int i=0; str[i]!='\0'; i++){
        sum += str[i]-'0';
    }
    return sum;
}
int nineN(int input)
{
    int sum=0;
    while(input>0){
        sum+=input%10;
        input /=10;
    }
    return sum;
}
int main()
{
    while(scanf("%s", line)==1){
        if(line[0]=='0')break;
        int d9=0;
        int sum = nineStr(line);
        if(sum%9!=0) printf("%s is not a multiple of 9.\n");
        else{
            int now=sum;
            while(1){
                d9++;
                if(now==9)break;
                now = nineN(now);
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", line, d9);
        }
    }
}
