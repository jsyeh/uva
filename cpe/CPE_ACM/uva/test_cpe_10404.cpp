//123
//456
//===
//579
//999999
//1
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b){
        if(a==0 && b==0)break;
        int ai[10],bi[10];
        ai[0]=a;bi[0]=b;
        for(int i=1;i<10;i++){
            ai[i]=ai[i-1]/10;
            ai[i-1]=ai[i-1]%10;
            bi[i]=bi[i-1]/10;
            bi[i-1]=bi[i-1]%10;
        }
        int count=0;
        int carry=0;
        for(int i=0;i<10;i++){
            if(ai[i]+bi[i]+carry>=10){
                carry=1; count++;
            }else{
                carry=0;
            }
        }
        if(count==0){
            cout<<"No carry operation."<<endl;
        }else if(count==1){
            cout<<count<<" carry operation."<<endl;
        }else{
            cout<<count<<" carry operations."<<endl;
        }
    }
    return 0;
}
