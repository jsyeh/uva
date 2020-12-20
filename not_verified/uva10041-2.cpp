#include <stdio.h>
int s[10000];
int nowDist[10000];///(6)
int main()
{
    int n;
    scanf("%d", &n);///(1)Input
    for(int t=0;t<n;t++){
        int r;
        scanf("%d", &r);
        for(int i=0;i<r;i++){
            scanf("%d", &s[i]);
        }

        ///(4)每個人的家,都要當過一次star
        int bestPos=0;
        for(int nowPos=0; nowPos<r; nowPos++){
            ///(3)算 sum of distance
            int star=s[nowPos];
            int sum=0;
            for(int i=0;i<r;i++){
                int dist=star-s[i];
                if(dist<0) dist = -dist;
                sum+=dist;
            }
            nowDist[nowPos] = sum;
            if( nowDist[nowPos] < nowDist[bestPos] ) bestPos=nowPos;
        }   ///(6)

        ///(2) Output
        printf("%d\n", nowDist[bestPos]);

    }
}
