#include <stdio.h>
int s[10000];///�a�b����
int distSum[10000];///(6)�H�Y�ӤH���a, ��X�Ӫ��Z��///�b�{�b�o�Ӧ�m��sum�O�h��
int main()
{
    int n;
    scanf("%d", &n);///(1) Input
    for(int t=1; t<=n; t++){
        int r;
        scanf("%d", &r);
        for(int i=0; i<r; i++){
            scanf("%d", &s[i]);
        }
        ///(4) �C�Ӧ�m���դ@��, �M��� bestPos��X��
        int bestPos=0;///s[bestPos]
        for(int nowPos=0; nowPos<r; nowPos++){
            ///(3)�[��
            int sum=0;
            int star=s[nowPos];///best position!!!
            for(int i=0; i<r; i++){
                int dist= star-s[i];///�� �P�P �� s[i]���Z��
                if(dist<0) dist = -dist;///����
                sum+=(dist);
            }
            distSum[nowPos] = sum;///�b�{�b�o�Ӧ�m��sum�O�h�� ///(6)�}�C�Ӧs�Ҧ����i��
            if(  distSum[nowPos] < distSum[bestPos] ) bestPos = nowPos;///(5)�M��� bestPos��X��
        }
        ///(2) Output
        printf("%d\n", distSum[bestPos]);///Q: ans??
    }
}
