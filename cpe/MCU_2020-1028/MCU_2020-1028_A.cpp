#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;
    while( scanf("%d%d", &a, &b)==2 ){
        if(a==0 && b==0)break;
        int start=sqrt(a);
        int ans=0;
        for(int i=start;   i*i<=b  ; i++){
            if(a<=i*i && i*i<=b) ans++;
        }
        printf("%d\n", ans);
    }
}
