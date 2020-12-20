#include <stdio.h>
int main()
{
    int a[12], b[12];
    while(1){
        int revl=0;
        for(int i=0; i<12; i++){
            int revl=scanf("%d", &a[i]);
            if(revl!=1) break;
            b[i]=a[i];

        }
        if(revl!=1)break;

        for(int i=0;i<12;i++){///sorting
            for(int j=i+1; j<12; j++){
                if(a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        ///找到小中大三軸,刷掉

        //
    }
}
