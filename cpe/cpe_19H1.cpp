#include <stdio.h>
int minutes(int H, int M)
{///�ڻݭn�@�Ө禡, ��p��:����, �ܦ��@�Ѫ��ĴX����
    return H*60+M;
}
int main()
{
    int H1,M1, H2,M2;
    while( scanf("%d %d %d %d", &H1,&M1, &H2,&M2)==4 ){
        if(H1==0 && H2==0 && M1==0 && M2==0) break;
        int t1=minutes(H1,M1);
        int t2=minutes(H2,M2);
        if(t2>t2) printf("%d\n", t2-t1);
        else printf("%d\n", t2-t1 + 24*60);
    }
}
