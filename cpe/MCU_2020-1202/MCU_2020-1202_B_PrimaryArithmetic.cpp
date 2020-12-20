#include <stdio.h>
int main()
{
    int a, b;
    while( scanf("%d%d",&a,&b)==2 ){
        if(a==0&&b==0)break;
        int carry=0;
        int c=0;
        while( a>0 && b>0){
            int a1=a%10, b1=b%10;
            if(a1+b1+c>=10){
                carry++;
                c = (a1+b1+c)/10;
            }
            a=a/10;
            b=b/10;
        }

        if(carry==0) printf("No carry operation.\n");
        else if(carry==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", carry);

    }
}
