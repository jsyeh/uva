#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int N;
        scanf("%d", &N);
        if(N==0){
            printf("0\n");
            continue;
        }
        vector<int> input(N);
        vector<int> inSeq(N);
        for(int i=0;i<N;i++){
            int now;
            scanf("%d", &now);
            input[i] = now;
            inSeq[i] = i;
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(input[i] > input[j]){
                    int temp=input[i]; input[i]=input[j]; input[j]=temp;
                    int tmp2=inSeq[i]; inSeq[i]=inSeq[j]; inSeq[j]=tmp2;
                }
            }
        }
        int now=input[0], uniqI=0;
        input[0]=uniqI;
        for(int i=1;i<N;i++){
            if( now != input[i] ){
                now=input[i];
                uniqI++;
            }
            input[i]=uniqI;
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(inSeq[i] >inSeq[j]){
                    int temp=input[i]; input[i]=input[j]; input[j]=temp;
                    int tmp2=inSeq[i]; inSeq[i]=inSeq[j]; inSeq[j]=tmp2;
                }
            }
        }
        ///現在可以處理新的 input囉
//        for(int i=0;i<N;i++){
//            printf("%d ", input[i]);
//        }
//        printf("\n");
        vector<int> bin(uniqI+1, 0);
        int left=0, right=0, maxL=1;
        while(right<N){
            int now=input[right];
            bin[now]++;
            while(bin[now]>1){///bad, not uniq
                int now=input[left];
                bin[now]--;
                left++;
            }
            if(right-left +1 > maxL ) maxL = right-left+1;
            right++;
        }
        printf("%d\n", maxL);
    }
}
