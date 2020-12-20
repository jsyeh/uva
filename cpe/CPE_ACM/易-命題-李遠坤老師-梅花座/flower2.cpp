#include <iostream>
using namespace std;
char table[100][100];
int main()
{
    int h,w;
    while(cin>>h>>w){
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>table[i][j];
            }
        }
        for(int j=0;j<=w;j++) table[h][j]='*';
        for(int i=0;i<=h;i++) table[i][h]='*';
        int good=1;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(table[i][j]=='*')continue;
                if(table[i][j]==table[i][j+1] || table[i][j]==table[i+1][j+1] || table[i][j]==table[i+1][j]){
                    good=0; i=h;j=w;
                }
            }
        }
        if(good==1)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}

