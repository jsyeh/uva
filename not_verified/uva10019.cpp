///不去背程式
///A+B+C =>D
///1,2,3 =>4
///技巧1: 資料讀進來, 馬上Run
#include <stdio.h>
int convert10to2(int m)
{
    int ans=0;
    while(m>0){
        int now = m%2;///上面
        if(now==1) ans++;
        m/=2;///上面
    }
    return ans;
}
int convert16to10to2(int m)
{
    int sum=0;
    while(m>0){
        int now = m%10;///與上面同
        sum*=16;///加總結果
        sum+= now;///加總結果
        m/=10;///與上面同
    }
    return convert10to2(sum);
}
int main()
{
    int n;///(4)
    scanf("%d", &n);///(1)
    for(int t=0;t<n;t++){///(2)
        ///老師是用t不是i
        ///t: test case
        int m;///(4)
        scanf("%d", &m);///(3)
        ///技巧2: 現在才來理解題目
        ///How to read 題目
        ///技巧3: 把10進位,轉2進位
        int b1 = convert10to2(m);
        int b2 = convert16to10to2(m);
        printf("%d %d\n", b1, b2);
    }
}
