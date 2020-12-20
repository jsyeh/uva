#include <stdio.h>
int main()
{
    int a, b;///Step01: Input
    while( scanf("%d%d",&a,&b)==2 ){
        if(a==0&&b==0) break;

        int ans=0, c=0;
        while( a>0 || b>0 ){///Step02:剝皮
            int a1=a%10, b1=b%10;///取個位數
            int now = a1+b1+c;///Step03:進位模擬
            if(now>9) ans++;///有進位
            c = now/10;///取10位數,等下
            a/=10;
            b/=10;///Step02
        }
        if(ans==0) printf("No carry operation.\n");///Step04: Output
        else if(ans==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", ans);
    }
}/*
c:       111
a: 123    555
b: 456    555
  ====  =====
   579   1110 */
