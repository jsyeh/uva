#include <iostream>
using namespace std;
int main()
{
    long long int s,d,area;
    while(cin>>s>>d){
        for(int i=0; ;i++){
            area=(s+s+i)*(i+1)/2;
            if(area>=d){
                cout<<s+i<<endl;
                break;
            }
        }
    }
    return 0;
}
