#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int s,d,area;
    while(cin>>s>>d){
        long long int a=1,b=2*s+1,c=2*s-2*d;
        long long int ans=s+(-b+sqrt(b*b-4*a*c))/2/a + 0.9999;
        cout<<ans<<endl;
//        for(int i=0; ;i++){
//            area=(s+s+i)*(i+1)/2;
//            if(area>=d){
//                cout<<s+i<<endl;
//                break;
//            }
//        }
    }
    return 0;
}
