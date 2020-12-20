#include <stdio.h>
int convert10to2(int m)
{
    int ans=0;
    while(m>0){
        int now = m%2;///­é¥Ö
        m/=2;

        if(now==1) ans++;
    }
    return ans;
}
int convert16to10to2(int m)
{
    int sum=0;
    while(m>0){
        int now = m%10;///­é¥Ö
        m/=10;
        sum*=16;
        sum+=now;
    }
    convert10to2(sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int t=0; t<n; t++){
        int m;
        scanf("%d", &m);
        int b1=convert10to2(m);
        int b2=convert16to10to2(m);
        printf("%d %d\n", b1, b2);
    }
}
