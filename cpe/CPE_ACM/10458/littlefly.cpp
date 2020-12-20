#include<stdlib.h>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;


int main()
{
	string str;
	string str2;

	while(cin>>str){
	    str2 = str;
	    if(atoi(str.c_str())==0)
                break;
            //這邊判斷如果輸入是9就直接輸出答案
	    if(atoi(str.c_str())==9){
	        cout<<"9 is a multiple of 9 and has 9-degree 1."<<endl;
		continue;	
	    }
	    int count = 0;//用來計算深度(需要做幾次加法才可以確定是九的倍數)
	    int flag = 0;
	    while(atoi(str.c_str())!=9){
	        count++;
		int sum = 0;
                //將數字相加
		for(int i = 0 ; i<str.size() ; i++){
		    sum = sum + str[i]-'0';
		}
		if(sum%9!=0){//檢驗後發現不是九的倍數即跳出迴圈
		    flag = 1;
		    break;
		}
		str = "";
		stringstream ss(str);
		ss<<sum;//將數字轉字串
		str = ss.str();			
	    }
	    if(flag==1){
	        cout<<str2<<" is not a multiple of 9."<<endl;
  	    }else{
		cout<<str2<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;   
	    }
	}
	return 0;
}