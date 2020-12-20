//2011-05-12 03:16 start programming
//03:22 input/output ok
//03:26 finish coding

#include <stdio.h>

int mat[150][150];
int main()
{
	int n,T;
	char a1[100],a2[100];
	scanf("%d", &T);
	for(int c=0;c<T;c++){
		int sym=1;
		scanf("%s %s %d", &a1,&a2,&n);
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j]<0)sym=0;
		}
		
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++){
			if(mat[i][j]!=mat[n-1-i][n-1-j])sym=0;
		}

		if(sym==1) printf("Test #%d: Symmetric.\n",c+1);
		else printf("Test #%d: Non-symmetric.\n",c+1);
	}
	return 0;
}