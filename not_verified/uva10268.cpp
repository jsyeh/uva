#include <stdio.h>
#include <string.h>
char line[5000];
int main()
{
    while(1){
        int x;
        scanf("%d", &x);///��1��
        fgets(line, 5000, stdin);///��e���Ʀr�᭱��\nŪ��
        fgets(line, 5000, stdin);///�o�~�O�u����2��
        char * next = strtok(line, " \t");
        while(next!=NULL){
            int now;
            sscanf(next, "%d", &now);
            next = strtok(NULL, " \t");
            printf("you read =%d=\n", now);
        }
    }
}
