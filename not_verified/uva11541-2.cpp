#include <stdio.h>
char ans[300000];
int main()
{
    int T;
    scanf("%d\n", &T);
    for(int t=1;t<=T; t++){
        int curser=0;
        while(1){
            char c;
            scanf("%c", &c);
            if(c=='\n') break;
            int d;
            scanf("%d", &d);
            for(int i=0;i<d;i++){
                ans[curser]=c;
                curser++;
                ans[curser]='\0';
            }
        }
        printf("Case %d: %s\n", t, ans);
    }
}
