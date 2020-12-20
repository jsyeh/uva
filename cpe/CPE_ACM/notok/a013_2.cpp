#include <iostream>
using namespace std;

int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int febday(int year)
{
	if(year%400==0){
		return 29;
	}
	if(year%100==0){
		return 28;
	}
	if(year%4==0){
		return 29;
	}
	return 28;	
}
int main()
{
	int year,month,day;
	int totalday=0;
	cout<<"year month day"<<endl;
	cin>>year>>month>>day;
	days[2]=febday(year);
	for(int i=1;i<month;i++){
		totalday+=days[i];
	}
	totalday+=day;
	cout<<totalday;
	return 0;
}



  