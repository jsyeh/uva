#include <stdio.h>
///long long int table[2000];/// table[i] means i nodes has ???? ¥i¯àªº¾ð
int table[2000][2000];
int len[2000];
void add(int i1, int i2, int ans)
{
    int len1=len[i1], len2=len[]
    for(int i=)
}
int main()
{
    table[0][0]=1; len[0]=1;
    table[1][0]=1; len[1]=1;
    for(int i=0;i<2000;i++){
        table[i][0]=0;
        len[i]=0;
    }
    //table[0]=1;
    //table[1]=1;
    for(int i=2; i<=1000; i++){
        table[i]=0;
        for(int left=0; left<i; left++){
            int right = i-1-left;
            table[i] += table[left]*table[right];
        }
    }
    int n;
    while( scanf("%d", &n)==1 ){
        printf("%lld\n", table[n]);
    }
}
