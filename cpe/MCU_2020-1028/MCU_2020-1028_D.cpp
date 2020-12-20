#include <stdio.h>
#include <string.h>
char country[2000][80], name[80];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", country[i]);
        gets(name);///名字不重要
    }
    int sorted[2000];
    for(int i=0; i<n; i++) sorted[i]=i;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int ii=sorted[i], jj=sorted[j];
            if( strcmp(country[ii],country[jj]) > 0 ){
                int temp=sorted[i]; sorted[i]=sorted[j]; sorted[j]=temp;
            }
        }
    }

    int count=1;
    for(int i=0; i<n-1; i++){
        int ii=sorted[i];
        int ii2=sorted[i+1];

        if( strcmp(country[ii],country[ii2])==0 ) count++;
        else{
            printf("%s %d\n", country[ii], count);
            count=1;
        }
    }
    int ii=sorted[n-1];
    printf("%s %d\n", country[ii], count);
}
