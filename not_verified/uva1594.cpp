#include <stdio.h>
int a[30];
int b[30];
int n;///��� a[i]���X��
int nextPair()
{
    int zero=0;
    for(int i=0;i<n;i++){
        b[i] = a[i]-a[(i+1)%n];
        if(b[i]<0) b[i] = -b[i];///�ܥ���
        if(b[i]==0) zero++;
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];///�A��^�h��Ӫ�a[i]
    }
    if(zero==n) return 0;///good! ZERO! �������O0
    else return 1;///bad! �٨S�������O0
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
        int good=0;///�٨S���O good ZERO
        for(int k=0; k<1002; k++){
            if( nextPair() ==0){///�i�H�o�� ZERO
                good=1;///good means it is ZERO
            }
        }
        if(good==1) printf("ZERO\n");
        else printf("LOOP\n");
    }
}
