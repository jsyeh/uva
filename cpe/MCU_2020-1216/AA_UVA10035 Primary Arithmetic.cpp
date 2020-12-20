#include <stdio.h>
int main()
{
    int a,b;
    while( scanf("%d%d", &a,&b)==2 ){
        int c=0, ans=0;
        while( a>0 || b>0 ){
            int a1=a%10,b1=b%10;
            if(a1+b1+c>9) ans++;
            c = (a1+b1+c)/10;///¶i¦ì

            a/=10;
            b/=10;
        }
        if(ans==0)printf("No carry operation.\n");
        if(ans==1)printf("1 carry operation.\n");
        if(ans>1)printf("%d carry operations.\n", ans);
    }
}
