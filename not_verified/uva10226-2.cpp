#include <stdio.h>///gets()
#include <string.h>///for strcmp()�r���j�p string compare
#include <stdlib.h>///for qsort()
char treeName[1000000][32];
int compare(const void * a, const void * b)
{///�j�����H,�����C�]���o�O�j�G�W��Ƶ��c�|��qsort()
    return strcmp( (const char*) a, (const char*) b);
}
int main()
{///(1) Input, ���i�Τj�@���x��scanf()�ӭn��gets
    int T;
    scanf("%d\n\n", &T);///�Ǫ��g�k,�nŪ��2�Ӹ���
    for(int t=0; t<T; t++){
        int treeN=0;
        while(1){
            ///char line[200];
            char* revl = gets(treeName[treeN]);///�����x
            if(revl==NULL) break;///2�إi�൲��: (a)eof, (b) error
            ///printf("==%s==\n", line);///���U�Ϊ��N�[
            if( strcmp(treeName[treeN], "")==0 ) break;///���`��case�ťզ�

            treeN++;///�h�@����
        }
        ///(3) �p�� (a) �Ƨ�,�Ӧr��, (b)�p��ƶq

//        for(int i=0;i<treeN; i++){///���U�Ϊ��N�[
//            printf("==%s==\n", treeName[i]);///���U�Ϊ��N�[
//        }///�ϥΫe
        qsort( treeName, treeN, 32, compare);
//        ///�ϥΫ�
//        printf("After:\n");///���U�Ϊ��N�[
//        for(int i=0;i<treeN; i++){///���U�Ϊ��N�[
//            printf("==%s==\n", treeName[i]);///���U�Ϊ��N�[
//        }
        ///(2) Output
        int oldPos=0;
        for(int i=1; i<treeN; i++){
            if( strcmp( treeName[i], treeName[i-1]) !=0 ){
                printf("%s %.4f\n", treeName[oldPos], 100.0*(i-oldPos)/treeN);
                oldPos=i;///��s,�s���}�l,��{�b�o�̷�oldPos
            }
        }
        ///���U�̫�@��
        printf("%s %.4f\n", treeName[oldPos], 100.0*(treeN-oldPos)/treeN);
    }
}
