#include <stdio.h>
int board[52][52];
int history[100][52][52];
int n;
int compare(int old)
{
    int same=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(board[i][j]==history[old][i][j]) same++;
        }
    }
    if(same==n*n) return 1;///return 1 means it is the same!

    same=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(board[i][j]==history[old][j][n+1-i]) same++;
        }
    }
    if(same==n*n) return 1;

    same=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(board[i][j]==history[old][n+1-i][n+1-j]) same++;
        }
    }
    if(same==n*n) return 1;

    same=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(board[i][j]==history[old][n+1-j][i]) same++;
        }
    }
    if(same==n*n) return 1;

    return 0;///no repeat!
}
int main()
{
    while( scanf("%d", &n)==1 ){
        if(n==0) break;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                board[i][j]=0;
            }
        }///²M¬°0

        int x, y;
        char c;
        int win=-1;
        for(int step=1; step<=n*2; step++){
            scanf("%d %d %c", &x, &y, &c );
            if(c=='+') board[x][y]=1;
            if(c=='-') board[x][y]=0;
            ///check history
            if(win>0) continue;
            for(int i=1; i<step; i++){
                int repeat=compare(i);///compare board[][] vs. history[i][][]
                if(repeat==1){
                    win = (step)%2+1;
                    printf("Player %d wins on move %d\n", win, step);
                }
            }
            ///backup history
            for(int i=1; i<=n; i++){
                for(int j=1; j<=n; j++){
                    history[step][i][j] = board[i][j];
                }
            }
        }
        if(win==-1) printf("Draw\n");
    }
}
