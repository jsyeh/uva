///2020-05-13 18:29開始讀題目 & 回答同學問題
#include <stdio.h>
int a[20];
int b[20];
int n;
int nextTupleIsZero(int n)
{///寫到 18:36有人找我,我先停一下
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
        ///18:32開始想,可能是模擬題

        ///e maximum number of steps of a Ducci sequence reaching zeros tuple or making a loop does not exceed 1,000.
        ///最多不超過 1000步, 所以只要看1000次之內有沒有 ZERO即可
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
