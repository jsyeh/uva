#include <stdio.h>
int a[1000];
int main()
{
    int x, n;
    char c;
    while( scanf("%d", &x)==1 ){
        for(int i=0;   scanf("%d%c",&a[i], &c)==2 ; i++){
        ///while( scanf("%d%c", &a[i], &c)==2 ){
            n=i;
            if(c=='\n') break;
        }

        int ans=0;
        for(int i=0; i<n; i++){
            ans*=x;
            ans+=(n-i)*a[i];
        }
        printf("%d\n", ans);
    }
}
