#include <stdio.h>
char input[30000];
char ans[30000];
int main()
{
    int T;
    scanf("%d", &T);

    for(int t=1; t<=T; t++){
        scanf("%s", input);

        int cursor=0;///���ĴX�Ӧr��
        for(int i=0; input[i]!='\0'; i++){///�`���r�ꪺfor�j��
            char now = input[i];
            i++;
            ///��Ʀr�հ_��, ���k��1�� input[i+1]�O�r������,����
            int n= input[i]-'0';
            while(1){
                ///if( input[i+1] �O�r��)break;
                if('A'<=input[i+1]&& input[i+1]<='Z') break;
                ///if(input[i+1] �O'\0' ) break;
                if(input[i+1]=='\0') break;
                n*=10;
                n+= input[i]-'0';
                i++;
            }
            for(int k=0;k<n;k++){
                ans[cursor]=now;
                cursor++;
            }
            ans[cursor]='\0';
        }

        printf("Case %d: %s", t, ans);
    }
}
