#include <stdio.h>
int main()
{
    int a[12];
    while( scanf("%d%d",&w[0],&h[0])==2 ){
        a[0]=w[0];
        a[1]=h[0];
        if(w[0]>h[0]){
            int temp=w[0];
            w[0]=h[0];
            h[0]=temp;
        }
        for(int i=1; i<6; i++){
            scanf("%d%d", &w[i],&h[i]);
            a[i*2+0]=w[i];
            a[i*2+1]=h[i];
            if(w[i]>h[i]){
                int temp=w[i];
                w[i]=h[i];
                h[i]=temp;
            }
        }
        for(int i=0;i<12;i++){
            for(int j=0;j<12;j++){
                if(a[i]>a[j]){
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }///sorting

        int dim[3]={};
        int used[6]={};

        for(int i=0;i<12;i++){
            if(a[i]
        }
        for(int i=0; i<6; i++){
            w[i]
            h[i]
        }
    }
}
