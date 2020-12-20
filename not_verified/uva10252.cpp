#include <stdio.h>
char a[2000];
char b[2000];
int tableA[256];
int tableB[256];
int main()
{
    while(scanf("%s %s", a,b)==2){
        for(int i=0;i<256;i++){
            tableA[i]=0; tableB[i]=0;
        }
        for(int i=0; a[i]!='\0' ; i++){
            char c=a[i];
            tableA[c]++;
        }
        for(int i=0; b[i]!='\0'; i++){
            char c=b[i];
            tableB[c]++;
        }
        for(int c='a'; c<='z'; c++){
            int small = tableA[c];
            if(tableB[c]<small) small=tableB[c];
            for(int i=0;i<small;i++){
                printf("%c", c);
            }
        }
        printf("\n");
    }
}
