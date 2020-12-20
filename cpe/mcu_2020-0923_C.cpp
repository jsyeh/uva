#include <stdio.h>///11min
int s[500];
int main()
{
    int T, r;
    scanf("%d", &T );
    for(int t=0; t<T; t++){
        scanf("%d", &r);
        for(int i=0; i<r; i++){
            scanf("%d", &s[i]);
        }
        int minSum=999999999;
        for(int i=0; i<r; i++){
            int sum=0;
            for(int k=0;k<r; k++){
                if(s[i]>s[k]) sum+= (s[i]-s[k]);
                else sum += (s[k]-s[i]);
            }
            if(sum<minSum) minSum=sum;
        }
        printf("%d\n", minSum);
    }
}
