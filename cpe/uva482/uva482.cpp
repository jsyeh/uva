#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
char line[200];
int index[90000];
char value[90000][20];
int main()
{
    int N;
    scanf("%d", &N);
    fgets(line, 200, stdin);/// newline after Test Case N

    for(int t=0;t<N; t++){
        if(t>0) cout<<endl;
        fgets(line, 200, stdin);/// blank line
        stringstream ss;
        fgets(line, 200, stdin);
        ss << line;
        int indexN=0;
        while( ss>> index[indexN] ){
            indexN++;
        }

        fgets(line, 200, stdin);
        stringstream ss2;
        ss2 << line;
        for(int i=0;i<indexN;i++){
            int realPos=index[i]-1;
            ss2 >> value[ realPos ];
        }

        for(int i=0;i<indexN;i++){
            cout<< value[i] <<endl;
        }
    }
}
