///2020-05-06 22:51 �}�l���D��
///22:52 ���i���DP? �O�_�����ΰ��k�Y�i?
///�άO�μɤO�k? �O�}�ڸ���?
///22:55 input OK,�Q�@�U�W�h
///2 3 4 5 6 7 8 9 10
///1 2 3 5
///1+1+(1or2)+
/// ex. ans[10]�w��, �h ans[11]�� ans[6]...ans[10]�[1
///ans[i]=ans[i-1]
///23:03 �Q�X�Ӫ� ans[i]�q�@�b�}�l+1����k����
///��� 7:3 ���Ѩ�: 1:0, 2:1, 4:2, 7:3
///23:05 Idea: �n���N�ݤ@�b�Y�i...
/// 7=> 7/2=3.5��4 => 4/2=2 => 2/2=1
///���״N�ݭn���X��, �άO�ϹL��, �����έ���
///23:10�ѥX��
#include <stdio.h>
int ans[10001];
void genAns()
{
    ans[0]=0;
    ans[1]=0;
    for(int i=2;i<10001;i++){
        if(i%2==0) ans[i]=ans[i/2]+1;
        else ans[i]=ans[i/2+1]+1;
//        int min=ans[i/2];
//        if(i%2==1) min=ans[i/2+1];
//        for(int k=i/2;k<i;k++){
//            if(ans[k]<min) min=ans[k];
//        }
//        ans[i]=min+1;
    }
//    for(int i=0;i<20;i++){
//        printf("%d:%d ", i,ans[i]);
//    }
}
int main()
{
    genAns();
    int N, t=1;
    while( scanf("%d", &N)==1){
        if(N<0)break;///�u�n�O�t��,�Nbreak;
        printf("Case %d: %d\n", t, ans[N]);
        t++;
    }
}
