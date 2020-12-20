#include <stdio.h>
#include <queue>
using namespace std;
char line[220][220];
int N;
int testNeighborWhiteOK(int i, int j)///函式的名子很重要,可以讓你思考容易
{///而且如果只看20行,還看得懂,方便拆解問題
    if(i<0 || j<0)return 0;///接下來為了避免當機,要有這兩行的檢查
    if(i>=N || j>=N)return 0;///讓陣列不會超過而當掉
    if(line[i][j]=='w'){///先想到這一行(配合函式的意義)
        line[i][j]='x';///用過,以後就不會再 line[i][j]=='w'的機會
        return 1;
    }
    return 0;
}
void findWhiteSolution(int T)
{
    int whiteNotWin=1;
    queue<int>I;///put i 座標
    queue<int>J;///put j 座標
    for(int i=0;i<N;i++){
        if(line[i][0]=='w'){
            I.push(i);
            J.push(0);
            line[i][0]=='x';
        }
    }///找一批種子
    while(I.size()>0){///如果還有種子
        int i=I.front(); I.pop();///種子發芽了
        int j=J.front(); J.pop();
        if(j==N-1) {
            whiteNotWin=0;///white win
            break;
        }
        ///把白色的鄰居,加到queue
        ///(i − 1, j − 1),(i − 1, j),(i, j − 1),
        ///(i, j + 1),(i + 1, j),(i + l, j + 1)
        if(testNeighborWhiteOK(i-1,j-1)){ I.push(i-1); J.push(j-1);}
        if(testNeighborWhiteOK(i-1,j  )){ I.push(i-1); J.push(j  );}
        if(testNeighborWhiteOK(i  ,j-1)){ I.push(i  ); J.push(j-1);}

        if(testNeighborWhiteOK(i  ,j+1)){ I.push(i  ); J.push(j+1);}
        if(testNeighborWhiteOK(i+1,j  )){ I.push(i+1); J.push(j  );}
        if(testNeighborWhiteOK(i+1,j+1)){ I.push(i+1); J.push(j+1);}
    }
    if(whiteNotWin==1) printf("%d B\n", T);
    else printf("%d W\n", T);
}
int main()
{
    int T=1;
    while(scanf("%d", &N)==1){
        if(N==0)break;
        for(int i=0;i<N;i++){
            scanf("%s", line[i]);
            ///printf("==%s==\n",line[i]);
        }
        findWhiteSolution(T);
        T++;
    }
}
///brute-force暴力法不可行, 6^200太大
///資料結構: BFS (queue)
