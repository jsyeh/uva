#include <stdio.h>
int table[200000]; /// table[1] 是1, table[2]=3, table[level] 是第 level層的下方的值
void buildTable()
{
    int level=100000;
    int ans=0;
    for(int i=0; i<=level; i++){
        ans += i;
        table[i] = ans;
    }
}
int find_steps(int x, int y)
{
    int level = x+y;
    int ans= table[level];
    return ans+x;
}
int main()
{
    buildTable();
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int step1= find_steps(a, b);///table[a+b]+a;
        int step2= find_steps(c, d);///table[c+d]+c;
        int ans=step2-step1;
        printf("Case %d: %d\n", t, ans);
    }
}
