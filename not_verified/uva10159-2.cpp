#include <stdio.h>
char S1[80];
char S2[80];
int convert10(char S[80])
{
    int ans=0;
    for(int i=0; S[i]!='\0'; i++){///剝皮法
        ans*=2;///進位
        if(S[i]=='1') ans+=1;///加新的數字
        if(S[i]=='0') ans+=0;///可以不用寫這行
    }
    return ans;
}
int gcd(int a, int b)
{
    if(a==0)return b;
    if(b==0)return a;
    int c = a%b;
    return gcd(b, c);
}
int main()
{///(1) Input
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        scanf("%s %s", S1, S2);///(3)字串

        ///(4) binary string to int
        int d1=convert10(S1);
        int d2=convert10(S2);
        ///(5) 整除
        ///(6) 最大公因數 gcd
        int ans=gcd(d1, d2);

        ///(2) Output
        if(ans>1) printf("Pair #%d: All you need is love!\n", t);
        else      printf("Pair #%d: Love is not all you need!\n", t);
    }
}
