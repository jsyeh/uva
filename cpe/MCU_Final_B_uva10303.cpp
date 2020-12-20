#include <stdio.h>
long long int table[2000];/// table[i] means i nodes has ???? ¥i¯àªº¾ð
int main()
{
    table[0]=1;
    table[1]=1;
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
