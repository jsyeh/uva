#include <stdio.h>///for gets()
#include <string.h>///for strcmp()
#include <stdlib.h>///for qsort()
char treeName[1000000][32];
int compare(const void * a, const void * b)
{
    return strcmp( (const char*)a,   (const char*)b );
}
int main()
{
    int T;///(1) Input
    scanf("%d\n\n", &T);
    for(int t=0;t<T;t++){///test case
        int treeN=0;
        while( gets(treeName[treeN]) ){///���z��,��3���[��///(1) Input
            if(strcmp( treeName[treeN], "" )==0){///�p�GŪ��ťզ�,��case ///(1) Input
                break;///���AŪ���///(1) Input
            }///(1) Input
            treeN++;///(1) Input
        }
        ///(3) qsort
        qsort( treeName, treeN, 32, compare);
        ///for(int i=0;i<treeN; i++){
        ///    printf("==%s==\n", treeName[i]);
        ///}///���ݬ�qsort�X�ӬO���O�u���Ӥj�p�Ʀn
        ///(2) Output
        int oldPos=0;
        for(int i=1;i<treeN; i++){
            if( strcmp( treeName[oldPos], treeName[i] )  !=0 ){///���ۦP���W�r
                printf("%s %.4f\n", treeName[oldPos], 100.0*(i-oldPos)/treeN);
                oldPos=i;
            }
        }
        printf("%s %.4f\n", treeName[oldPos], 100.0*(treeN-oldPos)/treeN);
    }
}
