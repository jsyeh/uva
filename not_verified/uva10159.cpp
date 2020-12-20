///all you need is love
#include <stdio.h>
char S1[100];///more than 30 is safe, 最後要轉成 32位元的 int
char S2[100];
int convert10(char S[100])///"11011"
{///把2進位, 轉成10
    int ans=0;
    for(int i=0; S[i] !='\0'   ; i++){///剝皮法
        ans *=2;
        if(S[i]=='1') ans +=1;
        if(S[i]=='0') ans +=0;
    }
    return ans;
}
int gcd(int a, int b)
{
    if(b==0) return a;
    if(a==0) return b;
    int c=a%b;
    return gcd( b, c );
}
int main()
{///(1) Input
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        scanf("%s %s", S1, S2 );///(3) 字串(陣列)如何讀進來
        ///scanf("%d", &n);///-2xxxxxxxxx ... +2xxxxxxxxx

        ///(4)轉10進位 很長的 1010101的binary二進位的字串, "轉成int整數"
        int d1 = convert10(S1);
        int d2 = convert10(S2);
        ///(5)整除 27 vs. 3 一直減, 最後會變0 (整除)
        ///用 calc小算盤證明一下
        /// 27 24 21 18 15 12 9 6 3 0
        ///(6)最大公因數 27 & 24 都可以被3整除, 開心!!!
        int ans = gcd(d1, d2);

        ///(2) Output (if來決定要用哪一行)
        if(ans>1) printf("Pair #%d: All you need is love!\n", t);
        else      printf("Pair #%d: Love is not all you need!\n", t);
    }
}
