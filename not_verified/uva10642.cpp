#include <stdio.h>
int table[20000];/// table[level] is ans
int find_steps(int x, int y)
{
    int level=x+y;
    ///算出三角形(or梯形)的面積
///    0+1+2+3+...
///Level:1 2 3
    int ans=0;
    for(int i=0;i<=level;i++){
        ans += i;
    }
    return ans+x;
}
int main()
{///(1) Input
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int step1=find_steps(a,b);
        int step2=find_steps(c,d);
        int ans=step2-step1;
        printf("Case %d: %d\n", t, ans);
    }
}
