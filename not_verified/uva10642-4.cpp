#include <stdio.h>
int circleID(int x, int y)
{///發現規則: x+y 代表第幾個斜線的那層, ex x+y為3時, 在第3斜線
///發現規則: 那層之前 (完整的三角形裡),有 1+2+... + 3 個圓
///發現規則: 第x+y斜線中, (x,y)是第x+1個圓(小心x是直軸,y是橫軸)
    int before=(1+(x+y))*(x+y)/2;///(上底+下底)*高/2
    return before + x+1;
}
int main()
{   int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++){
        int x,y, x2,y2;
        scanf("%d %d %d %d", &x,&y, &x2,&y2);
        int d1=circleID(x,y);
        int d2=circleID(x2,y2);
        int ans=d2-d1;///我不確定是否有負值,我猜要正值
        if(ans<0) ans=d1-d2;
        printf("Case %d: %d\n", t, ans);
    }
}
