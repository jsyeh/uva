#include <iostream>
using namespace std;
int main()
{
 int a, b, c, d;
 int day = 0;
 
 cout <<"�п�J��T�ǰ|����� (����)" <<endl;
 cin >>a;
 cout <<"�п�J������l���� (����)" <<endl;
 cin >>b;
 cout <<"�п�J�����դѤW�ɰ��� (����)" <<endl;
 cin >>c;
 cout <<"�п�J�����ߤW�U������ (����)" <<endl;
 cin >>d;
 
 int total = a-b;
 int climb = 0;
 while( climb<total )
 {
  day++;
  if(climb+c>=total)break;
  climb += (c-d);
 }
 
 cout <<day <<"�ѫ�i���W�γ�";
 
 cin>>a;
 return 0;
}
 
