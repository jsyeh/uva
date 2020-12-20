#include <stdio.h> ///18:51
///19:01,�Ȱ�,�����@�U
#include <queue>///19:06�~��g
///17:33 finished
using namespace std;
queue<int> Q1;///�ڪ���Ƶ��c
queue<int> Q2;
int board[12][12];///���L�����a,�n�Хܨ��L,�H��@�w���n�A��,�i��search space�����,���|exponential�z��
void clearBoard()
{///board[i][j]��ܱq a1,a2����o�̭n���h�[...
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            board[i][j]= -1;///unvisited!!!
            if(i==0 || i==1 ||i==10 || i==11) board[i][j]=9999;
            if(j==0 || j==1 ||j==10 || j==11) board[i][j]=9999;
        }
    }
}
int findI(char xx[3])
{
    return xx[0]-'a'+2;///�[2�O���I, �쥻8x8���ѽL,�Q�ڧ���t�[�j2��sentinal��L
}
int findJ(char xx[3])
{
    return xx[1]-'1'+2;///19:33 OK!
}
int TravelKnight(int a1, int a2, int b1, int b2)
{
    if(a1==b1 && a2==b2){
        return board[b1][b2];
    }
}
void add(int a1, int a2, int dist)
{
    board[a1][a2]=dist;
    Q1.push(a1); Q2.push(a2);
}
void testAndAdd(int a1, int a2, int dist)
{
    if( board[a1][a2]==-1) add(a1,a2, dist+1);
}
void clear( std::queue<int> &q )
{
   std::queue<int> empty;
   std::swap( q, empty );
}
void debug()
{
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            printf("%4d",board[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    char xx[3], yy[3];
    while( scanf("%s %s", xx, yy)==2 ){
        int ans=0;
        clearBoard();

        int a1=findI(xx);
        int a2=findJ(xx);
        int b1=findI(yy);
        int b2=findJ(yy);
        clear(Q1); clear(Q2);
        add(a1,a2, 0);
        ///board[a1][a2]=0;
        ///Q1.push(a1); Q2.push(a2);
        ///TravelKnight(a1,a2,b1,b2);
        while( Q1.size()>0 ){
            int now1=Q1.front(), now2=Q2.front();
            Q1.pop(); Q2.pop();

            int nowDist=board[now1][now2];
            if(now1==b1 && now2==b2){
                ans=board[b1][b2];
                break;
            }
            testAndAdd(now1+2, now2+1, nowDist);
            testAndAdd(now1+2, now2-1, nowDist);
            testAndAdd(now1+1, now2+2, nowDist);
            testAndAdd(now1+1, now2-2, nowDist);

            testAndAdd(now1-2, now2+1, nowDist);
            testAndAdd(now1-2, now2-1, nowDist);
            testAndAdd(now1-1, now2+2, nowDist);
            testAndAdd(now1-1, now2-2, nowDist);
        }
//        debug();
        printf("To get from %s to %s takes %d knight moves.\n", xx, yy, ans);

    }
}
