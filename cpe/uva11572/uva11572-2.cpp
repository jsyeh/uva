#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
class Big{
public:
    int input;
    int inSeq;
};
bool sortByInput(Big a, Big b)
{
    return a.input<b.input;
}
bool sortByInSeq(Big a, Big b)
{
    return a.inSeq<b.inSeq;
}
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

        //vector<int> input(N);
        //vector<int> inSeq(N);
        vector<Big> big(N);
        for(int i=0;i<N;i++){
            int now;
            scanf("%d", &now);
            big[i].input = now;
            big[i].inSeq = i;

        }
        sort(big.begin(), big.end(), sortByInput );
        int now=big[0].input, uniqI=0;
        big[0].input=uniqI;
        for(int i=1;i<N;i++){
            if( now != big[i].input ){
                now=big[i].input;
                uniqI++;
            }
            big[i].input=uniqI;
        }
        sort(big.begin(), big.end(), sortByInSeq );
        ///現在可以處理新的 input囉
//        for(int i=0;i<N;i++){
//            printf("%d ", input[i]);
//        }
//        printf("\n");
        vector<int> bin(uniqI+1, 0);
        int left=0, right=0, maxL=1;
        while(right<N){
            int now=big[right].input;
            bin[now]++;
            while(bin[now]>1){///bad, not uniq
                int now=big[left].input;
                bin[now]--;
                left++;
            }
            if(right-left +1 > maxL ) maxL = right-left+1;
            right++;
        }
        printf("%d\n", maxL);
    }
}
