#include <stdio.h>
char input[30000];
char ans[30000];
int main()
{
    int T;
    scanf("%d", &T);

    for(int t=1; t<=T; t++){
        scanf("%s", input);

        int cursor=0;///改到第幾個字母
        for(int i=0; input[i]!='\0';    ){///常見字串的for迴圈
            char now = input[i];
            i++;
            ///把數字組起來, 往右看1格 input[i+1]是字母的話,收尾
            int n=0;
            while(1){
                n*=10;
                n+= input[i]-'0';
                i++;
                ///if( input[i+1] 是字母)break;
                if('A'<=input[i]&& input[i]<='Z') break;
                ///if(input[i+1] 是'\0' ) break;
                if(input[i]=='\0') break;

            }
            for(int k=0;k<n;k++){
                ans[cursor]=now;
                cursor++;
            }
            ans[cursor]='\0';
        }

        printf("Case %d: %s\n", t, ans);
    }
}
