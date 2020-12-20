#include <stdio.h>///27min
int main()
{
    int S, N, I;
    double p;
    scanf("%d", &S);
    for(int t=0; t<S; t++){
        scanf("%d %lf %d", &N, &p, &I);
///下面這兩行英文看了很久, 看不懂
///and I (I ≤ N) the serial of the (serial 是什麼意思?)
///player whose winning probability is to be determined
///(Serial no varies from 1 to N).//18:18 好像有點感覺, 要看上面題目了
///18:19 好像是模擬題, 用20000個機率去加起來
///18:21 了解, 用等差級數, 加起來就是答案
///18:23 白板寫出公式的規律了
        double ans=0, pp=(1-p), ppI=1, ppN=1; ///pp=(1-p)
        for(int i=0;i<I-1;i++) ppI*=pp;
        for(int i=0;i<N;i++) ppN*=pp;
        double now=ppI;
        for(int i=0; i<1000; i++){
            ans += now*p;
            now*=ppN;
        }
        printf("%.4f\n", ans);
    }
}
