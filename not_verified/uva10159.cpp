///all you need is love
#include <stdio.h>
char S1[100];///more than 30 is safe, �̫�n�ন 32�줸�� int
char S2[100];
int convert10(char S[100])///"11011"
{///��2�i��, �ন10
    int ans=0;
    for(int i=0; S[i] !='\0'   ; i++){///��֪k
        ans *=2;
        if(S[i]=='1') ans +=1;
        if(S[i]=='0') ans +=0;
    }
    return ans;
}
int gcd(int a, int b)
{
    if(b==0) return a;
    if(a==0) return b;
    int c=a%b;
    return gcd( b, c );
}
int main()
{///(1) Input
    int n;
    scanf("%d", &n);
    for(int t=1; t<=n; t++){
        scanf("%s %s", S1, S2 );///(3) �r��(�}�C)�p��Ū�i��
        ///scanf("%d", &n);///-2xxxxxxxxx ... +2xxxxxxxxx

        ///(4)��10�i�� �ܪ��� 1010101��binary�G�i�쪺�r��, "�নint���"
        int d1 = convert10(S1);
        int d2 = convert10(S2);
        ///(5)�㰣 27 vs. 3 �@����, �̫�|��0 (�㰣)
        ///�� calc�p��L�ҩ��@�U
        /// 27 24 21 18 15 12 9 6 3 0
        ///(6)�̤j���]�� 27 & 24 ���i�H�Q3�㰣, �}��!!!
        int ans = gcd(d1, d2);

        ///(2) Output (if�ӨM�w�n�έ��@��)
        if(ans>1) printf("Pair #%d: All you need is love!\n", t);
        else      printf("Pair #%d: Love is not all you need!\n", t);
    }
}
