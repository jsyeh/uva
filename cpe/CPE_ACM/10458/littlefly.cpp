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
            //�o��P�_�p�G��J�O9�N������X����
	    if(atoi(str.c_str())==9){
	        cout<<"9 is a multiple of 9 and has 9-degree 1."<<endl;
		continue;	
	    }
	    int count = 0;//�Ψӭp��`��(�ݭn���X���[�k�~�i�H�T�w�O�E������)
	    int flag = 0;
	    while(atoi(str.c_str())!=9){
	        count++;
		int sum = 0;
                //�N�Ʀr�ۥ[
		for(int i = 0 ; i<str.size() ; i++){
		    sum = sum + str[i]-'0';
		}
		if(sum%9!=0){//�����o�{���O�E�����ƧY���X�j��
		    flag = 1;
		    break;
		}
		str = "";
		stringstream ss(str);
		ss<<sum;//�N�Ʀr��r��
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