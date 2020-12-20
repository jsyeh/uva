#include <stdio.h>
int s[10000];///家在哪裡
int distSum[10000];///(6)以某個人為家, 算出來的距離///在現在這個位置的sum是多少
int main()
{
    int n;
    scanf("%d", &n);///(1) Input
    for(int t=1; t<=n; t++){
        int r;
        scanf("%d", &r);
        for(int i=0; i<r; i++){
            scanf("%d", &s[i]);
        }
        ///(4) 每個位置都試一次, 然後把 bestPos找出來
        int bestPos=0;///s[bestPos]
        for(int nowPos=0; nowPos<r; nowPos++){
            ///(3)觀念
            int sum=0;
            int star=s[nowPos];///best position!!!
            for(int i=0; i<r; i++){
                int dist= star-s[i];///算 星星 到 s[i]的距離
                if(dist<0) dist = -dist;///正的
                sum+=(dist);
            }
            distSum[nowPos] = sum;///在現在這個位置的sum是多少 ///(6)陣列來存所有的可能
            if(  distSum[nowPos] < distSum[bestPos] ) bestPos = nowPos;///(5)然後把 bestPos找出來
        }
        ///(2) Output
        printf("%d\n", distSum[bestPos]);///Q: ans??
    }
}
