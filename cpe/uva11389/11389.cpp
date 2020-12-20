#include <stdio.h>
int morning[100], evening[100], quota[100];
int main()
{
    int n,d,r;
    while(scanf("%d%d%d",&n,&d,&r)==3){
        if(n==0 && d==0 &&r==0)break;
        for(int i=0;i<n;i++){
            scanf("%d", &morning[i]);
            quota[i]=d-morning[i];
        }
        for(int i=0;i<n;i++){
            scanf("%d", &evening[i]);
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(quota[i]>quota[j]){
                    int temp=quota[i];quota[i]=quota[j];quota[j]=temp;
                }
                if(evening[i]>evening[j]){
                    int temp=evening[i];evening[i]=evening[j];evening[j]=temp;
                }
            }
        }

        int overtime=0;
        ///...暴力法一定不行, 100! 太大...
        ///DP
        ///greedy after sorting...
        for(int i=0;i<n;i++){
            if(quota[i]<evening[i]) overtime+=evening[i]-quota[i];
        }
        printf("%d\n", overtime*r);
    }
}
