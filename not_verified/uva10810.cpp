#include <stdio.h>
int a[100];
int main()
{
    int n;
    while( scanf("%d", &n)==1 ){
        if(n==0) break;
        for(int i=0;i<n;i++){
            scanf("%d", &a[i]);
        }
        int ans=0;
        for(int k=0; k<n-1; k++){
            for(int i=0;i<n-1;i++){///因為下面有 a[i+1]所以i小1點
                if( a[i] > a[i+1] ){
                    int temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    ans++;
                }
            }
        }
        printf("%d\n", ans);
    }
}
