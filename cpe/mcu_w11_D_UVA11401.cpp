///2020-05-06 23:39 �}�l�� 23:40�ginput
///24:11�g�XDP��,������,
///24:18�ڶäF, ��� 24:23�A�^�Ӹո�
///24:33 ok
#include <stdio.h>
int ans[1000001];
int totalAB(int n)
{///24:29 �ռg�ܴX�ӼƦr��,���W�� 24:33�øեX�ӤF...
    int w=n-3;
    if(w%2==0) return w*(w/2+1)/2;///�T����
    else return (w+1)*(w+1)/2/2;///���
//    return (w+1)*((w+1)/2)/2;
}
int totalABbad(int n)
{///c: n, b: n-1, a: n-2...2, �`�ƬOn-2-1 (i:1)
    ///      n-2, a: n-3...3, n-3-2
    ///      n-3, a: n-4...4, n-4-3, �̫�a�n�j��0
    ///                       n-i-1-i > 0
    ///                       n-1 > 2i    ...(i:
    ///                       (n-1)/2 > i
    ///�ҥH�O n-1... (n-1)/2
    ///24:03�Q��Τ������W���B�U���B��
    int count=0;///24:14for�j��ո�
    for(int i=1; i<=(n-1)/2.0; i++) count++;
    return count;
    float bound=(n-1)/2.0;///�p�G���p���I,���׬O(n-1)/2
    ///�p�G�O�㰣,���׬O(n-1)/2-1
    if( (n-1)%2==0) return (n-1)/2-1;
    else return (n-1)/2; ///24:09
    ///24:12���: c:5, b:5-1, a: 2...5-1-1
    ///                b:5-2, a: 3...5-3(���X)
}
int genTable()
{
    ans[0]=0;
    ans[1]=0;
    ans[2]=0;
    ans[3]=0;
    for(int c=4;c<=100;c++){///24:00�o�{�O��Τ���
        ans[c] = ans[c-1] + totalAB(c);
    }
}
int main()
{
    genTable();
    int n;///n: 3...1000,000 �ҥH����μɤO�k 23:41
        ///23:43�]�N�O�����C(n,3)�h�ɤO��
    while( scanf("%d",&n)==1 ){
        if(n<3) break;
        ///23:42�}�l�Q���S�����Ъ���,DP�O�Ѫk
        ///23:44�ΨҤl�Q�W�h: 1,2,3(x)
        ///�p�G����a,b 2�Ӽ�,�A�ƾǺ�X��3�Ӫ��d��,�n����a,b
        ///23:45�i��
//        int ans=0;
//        for(int a=1; a<=n; a++){///�̤p��
//            for(int b=a+1; b<=n; b++){///����
//                ///�̪��䥲���O c<a+b
//                /// b<c<a+b => (a-1)
//                ///�P��, c�]�n<=n
//                if(n<a+b) ans += a-1;
//                else ans += n-a;
//            }
//        }
        printf("%d\n", ans[n]);///23:50����, 23:51�����F
    }///�i�঳����W��,�i�դ@�U
}/*
1 2 3 (x) 3:0
1 3 4 (x)
2 3 4 (O) 4:1
2 4 5 (O)
3 4 5 (O) 5:3  �i�H��DP�Ӹ�, ans[n-1]���F,
�hans[n] �O ans[n-1] + ��3��Ψ�n, �Y
*/
