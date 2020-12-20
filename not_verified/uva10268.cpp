#include <stdio.h>
#include <string.h>
char line[5000];
int main()
{
    while(1){
        int x;
        scanf("%d", &x);///第1行
        fgets(line, 5000, stdin);///把前面數字後面的\n讀掉
        fgets(line, 5000, stdin);///這才是真的第2行
        char * next = strtok(line, " \t");
        while(next!=NULL){
            int now;
            sscanf(next, "%d", &now);
            next = strtok(NULL, " \t");
            printf("you read =%d=\n", now);
        }
    }
}
