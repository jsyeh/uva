#include <iostream>
using namespace std;
int main()
{
 int a, b, c, d;
 int day = 0;
 
 cout <<"請輸入資訊學院牆壁高 (公尺)" <<endl;
 cin >>a;
 cout <<"請輸入蝸牛初始高度 (公尺)" <<endl;
 cin >>b;
 cout <<"請輸入蝸牛白天上升高度 (公尺)" <<endl;
 cin >>c;
 cout <<"請輸入蝸牛晚上下降高度 (公尺)" <<endl;
 cin >>d;
 
 int total = a-b;
 int climb = 0;
 while( climb<total )
 {
  day++;
  if(climb+c>=total)break;
  climb += (c-d);
 }
 
 cout <<day <<"天後可爬上屋頂";
 
 cin>>a;
 return 0;
}
 
