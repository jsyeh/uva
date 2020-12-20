#include <iostream>
using namespace std;

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
	int feb=febday(year);
	switch(month){
	case 1:
		totalday=day;
		break;
	case 2:
		//add January 31 days
		totalday=31+day;
		break;
	case 3:
		totalday=31+feb+day;
		break;
	case 4:
		totalday=31+feb+31+day;
		break;
	case 5:
		totalday=31+feb+31+30+day;
		break;
	case 6:
		totalday=31+feb+31+30+31+day;
		break;
	case 7:
		totalday=31+feb+31+30+31+30+day;
		break;
	case 8:
		totalday=31+feb+31+30+31+30+31+day;
		break;
	case 9:
		totalday=31+feb+31+30+31+30+31+31+day;
		break;
	case 10:
		totalday=31+feb+31+30+31+30+31+31+30+day;
		break;
	case 11:
		totalday=31+feb+31+30+31+30+31+31+30+31+day;
		break;
	case 12:
		totalday=31+feb+31+30+31+30+31+31+30+31+31+day;
		break;
	}
	cout<<totalday;
	return 0;
}



  