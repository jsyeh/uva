#include <stdio.h>
int minutes(int h, int m)
{
    return h*60+m;
}
int main()
{
    int h1,m1, h2,m2;
    while( scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4 ){
        if(h1==0&&m1==0&&h2==0&&m2==0) break;
        int t1=minutes(h1,m1);
        int t2=minutes(h2,m2);
        int ans=t2-t1;
        if(ans<0) ans+=24*60;
        printf("%d\n", ans);
    }
}
