#include <stdio.h>
int circleID(int x, int y)
{///�o�{�W�h: x+y �N��ĴX�ӱ׽u�����h, ex x+y��3��, �b��3�׽u
///�o�{�W�h: ���h���e (���㪺�T���θ�),�� 1+2+... + 3 �Ӷ�
///�o�{�W�h: ��x+y�׽u��, (x,y)�O��x+1�Ӷ�(�p��x�O���b,y�O��b)
    int before=(1+(x+y))*(x+y)/2;///(�W��+�U��)*��/2
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
        int ans=d2-d1;///�ڤ��T�w�O�_���t��,�ڲq�n����
        if(ans<0) ans=d1-d2;
        printf("Case %d: %d\n", t, ans);
    }
}
