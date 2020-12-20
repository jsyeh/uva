//2011-05-20 02:47 start programming
//02:52 input ok, but print error
//02:58 statisitc ok, now sorting
//03:08 sort ok (I forgot how to use vector/sort)
//03:11 wrong answer, but why?

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
char line[10000];
int array[26];

vector<int> v(26);
bool cmp(int i, int j)
{
	return array[i]>array[j];
}

int main()
{
	for(int i=0;i<26;i++){
		array[i]=0;
		v[i]=i;
	}
	int n;
	scanf("%d", &n);
	fgets(line,10000,stdin);
	for(int c=0;c<n;c++){
		fgets(line, 10000, stdin);
		int i=0;
		while(line[i]!='\0'){
			if(line[i]>='a' && line[i]<='z'){
				array[line[i]-'a']++;
			}else if(line[i]>='A' && line[i]<='Z'){
				array[line[i]-'A']++;
			}
			i++;
		}
	}
	sort(v.begin(), v.end(), cmp);
	for(int i=0;i<26;i++){
		if(array[v[i]]==0)break;
		printf("%c %d\n", 'A'+v[i], array[v[i]]);
	}
	return 0;
}
