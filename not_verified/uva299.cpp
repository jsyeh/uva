#include <stdio.h>
int carriage[50];///車廂
int main()
{///(1) Input
    int N;
    scanf("%d", &N);
    for(int t=0; t<N; t++){
        int L;
        scanf("%d", &L);
        for(int i=0;i<L;i++){
            scanf("%d", &carriage[i]);
        }
        int ans=0;
        for(int i=0; i<L; i++){
            for(int j=i+1; j<L; j++){
                if( carriage[i] > carriage[j] ){///(3)順序不對,就交換
                    int temp=carriage[i];
                    carriage[i]=carriage[j];
                    carriage[j]=temp;
                    ans++;///做一次交換 ++
                }
            }
        }
        ///(2) Output
        printf("Optimal train swapping takes %d swaps.", ans);
    }
}
