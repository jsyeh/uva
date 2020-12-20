#include <stdio.h>
#include <string.h>
char keyword[20][100], excuse[20][100];
int times[20];
int main()
{
    int t=1;
    int K, E;
    while( scanf("%d %d\n", &K, &E)==2 ){
        for(int i=0; i<K; i++){
            gets(keyword[i]);//scanf("%s", keyword[i]);
        }
        int max=0;
        for(int i=0; i<E; i++){
            gets(excuse[i]);///scanf("%s", excuse[i]);
            times[i]=0;
            for(int k=0; k<K; k++){
                char * now=excuse[i];
                now=strstr(now, keyword[k]);
                while(now!=NULL){
                    times[i]++;
                    now=strstr(now+1, keyword[k]);
                }
            }
            if( times[i]>max) max=times[i];
        }
        printf("Excuse Set #%d\n", t);
        for(int i=0; i<E; i++){
            if(times[i]==max) printf("%s\n", excuse[i]);
        }
        printf("\n");
        t++;
    }
}
