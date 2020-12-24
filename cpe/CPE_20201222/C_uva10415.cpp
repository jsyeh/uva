#include <stdio.h>
int findNote(char c)
{
	char note[]="cdefgabCDEFGAB";
	for(int i=0; i<14; i++){
		if(note[i]==c) return i;
	}
}
//table[note][finger]表示音符note對的手指finger有沒有按
int table[14][10]={
// 1,2,3,4,5,6,7,8,9,10
  {0,1,1,1,0,0,1,1,1,1},//c
  {0,1,1,1,0,0,1,1,1,0},//d
  {0,1,1,1,0,0,1,1,0,0},//e
  {0,1,1,1,0,0,1,0,0,0},//f
  {0,1,1,1,0,0,0,0,0,0},//g
  {0,1,1,0,0,0,0,0,0,0},//a
  {0,1,0,0,0,0,0,0,0,0},//b
  {0,0,1,0,0,0,0,0,0,0},//C
  {1,1,1,1,0,0,1,1,1,0},//D
  {1,1,1,1,0,0,1,1,0,0},//E
  {1,1,1,1,0,0,1,0,0,0},//F
  {1,1,1,1,0,0,0,0,0,0},//G
  {1,1,1,0,0,0,0,0,0,0},//A
  {1,1,0,0,0,0,0,0,0,0}};//B
char line[1002];
int main()
{
	int n;
	scanf("%d", &n);
	for(int t=0; t<n; t++){
		scanf("%s", line);
		int ans[10]={};//all zero,放最後按了幾下
		int pressed[10]={};//存現在的手指狀態,0沒按,1按下
		for(int i=0; line[i]!=0; i++){
			char c = line[i];
			int note = findNote(c);//現在的音符
			for(int finger=0; finger<10; finger++){
				if(table[note][finger]==1 && pressed[finger]==0){
					pressed[finger]=1;
					ans[finger]++;
				}else if(table[note][finger]==0){
					pressed[finger]=0;
				}
			}
		}
		
		for(int i=0; i<10; i++){
			if(i<9) printf("%d ", ans[i]);
			else printf("%d\n", ans[i]);
		}
	}
}
