///2020-05-13 18:29�}�lŪ�D�� & �^���P�ǰ��D
#include <stdio.h>
int a[20];
int b[20];
int n;
int nextTupleIsZero(int n)
{///�g�� 18:36���H���,�ڥ����@�U
    for(int i=0;i<n;i++){
        b[i]=a[i]-a[(i+1)%n];
        if
            (b[i]<0) b[i]=-b[i];
    }
    int zero=0;
    for(int i=0;i<n;i++){
        a[i]=b[i];
        if(b[i]==0) zero++;
    }
    if(zero==n) return 1;///ZERO
    else return 0;///NOT ZERO
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        ///18:32�}�l�Q,�i��O�����D

        ///e maximum number of steps of a Ducci sequence reaching zeros tuple or making a loop does not exceed 1,000.
        ///�̦h���W�L 1000�B, �ҥH�u�n��1000���������S�� ZERO�Y�i
        int ans=1;///loop
        for(int k=0; k<1200; k++){
            if(nextTupleIsZero(n)==1){
                ans=0;///zero
                break;
            }
        }
        if(ans==1) printf("LOOP\n");
        else printf("ZERO\n");
    }
}
