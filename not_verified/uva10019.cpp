///���h�I�{��
///A+B+C =>D
///1,2,3 =>4
///�ޥ�1: ���Ū�i��, ���WRun
#include <stdio.h>
int convert10to2(int m)
{
    int ans=0;
    while(m>0){
        int now = m%2;///�W��
        if(now==1) ans++;
        m/=2;///�W��
    }
    return ans;
}
int convert16to10to2(int m)
{
    int sum=0;
    while(m>0){
        int now = m%10;///�P�W���P
        sum*=16;///�[�`���G
        sum+= now;///�[�`���G
        m/=10;///�P�W���P
    }
    return convert10to2(sum);
}
int main()
{
    int n;///(4)
    scanf("%d", &n);///(1)
    for(int t=0;t<n;t++){///(2)
        ///�Ѯv�O��t���Oi
        ///t: test case
        int m;///(4)
        scanf("%d", &m);///(3)
        ///�ޥ�2: �{�b�~�Ӳz���D��
        ///How to read �D��
        ///�ޥ�3: ��10�i��,��2�i��
        int b1 = convert10to2(m);
        int b2 = convert16to10to2(m);
        printf("%d %d\n", b1, b2);
    }
}
