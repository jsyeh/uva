/// 1(1*1) ... 4(2*2) =>2��
/// 1(1*1)  4(2*2) 9(3*3) ... 10 =>3��
#include <stdio.h>
#include <math.h>
int main()
{///(1)Input
    int a,b;
    while( scanf("%d %d", &a, &b)==2 ){
        if(a==0 && b==0) break;
        int ans=0;///(3)
        for(int i=sqrt(a); i<=b; i++){
            if( a<=i*i && i*i<=b ) ans++;
            if( i*i > b) break;///���F�[�t
        }
        ///(2) Output
        printf("%d\n", ans);
    }
}
