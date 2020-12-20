#include <iostream>

#include <cstring>

using namespace std;

int main(){

	char checked[]={'`','1','2','3','4','5','6','7','8','9','0','-','=',

        	   'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',

               'A','S','D','F','G','H','J','K','L',';','\'',

               'Z','X','C','V','B','N','M',',','.','/'};

	while (true){

		char input[10002];

		cin.getline(input,10002);

		if(cin.eof())

			break;

		int len = strlen(input);

		for(int i=0;i<len;i++){

			for(int j=0;j<47;j++){

				if(input[i] == checked[j])

					input[i]=checked[j-1];

			}

			cout << input[i];

		}

		cout << endl;

	}

	return 0;

}
