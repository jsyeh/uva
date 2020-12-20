#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--){
        int amp,freq;
        cin>>amp>>freq;
        for(int i=0;i<freq;i++){
            for(int j=1;j<amp;j++){
                for(int k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<endl;
            }
            for(int j=amp;j>=1;j--){
                for(int k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<endl;
            }
            if(n==0 && i==freq-1){

            }else cout<<endl;
        }
        //if(n>0) cout<<endl;
    }
    return 0;

}
