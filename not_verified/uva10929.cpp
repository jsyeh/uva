#include <stdio.h>
int main()
{
    char line[2000];
    while( scanf("%s", &line)==1){///1000计,ノ﹃
        int oddSum=0, evenSum=0;///计兜㎝,案计兜㎝
        for(int i=0; line[i]!='\0' ; i++){///﹃い,–计
            int now = line[i]-'0';///辨рダ=>计
            if(i%2==1) oddSum+= now;
            else evenSum+= now;
        }
        if( (oddSum-evenSum)%11 ==0 ){
            printf("%s is a multiple of 11.\n", line);
        }else{
            printf("%s is not a multiple of 11.\n", line);
        }
    }
}
