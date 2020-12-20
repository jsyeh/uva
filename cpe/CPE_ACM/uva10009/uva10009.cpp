#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
   int T;
   cin>>T;
   int first=1;
   while(T--){
      int m,n;
      cin>>m>>n;
      map<char,char> parent;
      string city1,city2;
      for(int i=0;i<m;i++){
         cin>>city1>>city2;
         parent[city2[0]]=city1[0];
      }
      if(first==1) first=0;
      else cout<<endl;
      for(int q=0;q<n;q++){
         cin>>city1>>city2;
         char route1[26],route2[26];
         int p1=0,p2=0;
         route1[0]=city1[0];
         while(route1[p1]!='R'){
            route1[p1+1]=
               parent[route1[p1]];
            p1++;
         }
         route2[0]=city2[0];
         while(route2[p2]!='R'){
            route2[p2+1]=
               parent[route2[p2]];
            p2++;
         }
         while(route1[p1]==route2[p2]){
            p1--; p2--;
         }
         for(int i=0;i<=p1+1;i++){
            cout<<route1[i];
         }
         for(int i=p2;i>=0;i--){
            cout<<route2[i];
         }
         cout<<endl;
      }
      parent.clear();
   }
   return 0;
}
