//18:33-18:39 array OK 18:45 OK
#include <stdio.h>
char line[300];
char word[]="cdefgabCDEFGAB";
int key[14][10]={
  ///1 2 3 4 5 6 7 8 9 10
    {0,1,1,1,0,0,1,1,1,1},//c
    {0,1,1,1,0,0,1,1,1,0},//d
    {0,1,1,1,0,0,1,1,0,0},//e
    {0,1,1,1,0,0,1,0,0,0},//f
    {0,1,1,1,0,0,0,0,0,0},//g
    {0,1,1,0,0,0,0,0,0,0},//a
    {0,1,0,0,0,0,0,0,0,0},//b
    {0,0,1,0,0,0,0,0,0,0},//C
    {1,1,1,1,0,0,1,1,1,0},//D
    {1,1,1,1,0,0,1,1,0,0},//E
    {1,1,1,1,0,0,1,0,0,0},//F
    {1,1,1,1,0,0,0,0,0,0},//G
    {1,1,1,0,0,0,0,0,0,0},//A
    {1,1,0,0,0,0,0,0,0,0}//B
};
int findKey(char c)
{
    for(int i=0; word[i]!=0; i++){
        if(c==word[i]) return i;
    }
    return 0;
}
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        scanf("%s", line);
        int ans[10]={};
        int state[10]={};
        for(int i=0; line[i]!=0; i++){
            int k = findKey(line[i]);
            for(int z=0; z<10; z++){
                if(state[z]==0 && key[k][z]==1){
                    state[z]=1;
                    ans[z]++;
                }else state[z]=key[k][z];
            }
        }
        for(int i=0; i<10; i++){
            if(i<9) printf("%d ", ans[i]);
            else printf("%d\n", ans[i]);
        }
    }
}
