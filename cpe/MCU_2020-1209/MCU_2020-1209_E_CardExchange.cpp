//18:45-18:48 input OK,�}�lŪ�D��trade
//18:51 sort OK, 18:53�o�{���ӴN�Ʀn�F, �i�R
//18:59 �g��, �o�{ trade �{���z�ѿ��~, ���
//��2�����Ӭ�,�F�ѥu�n�O���P��,�N�i�Htrade
#include <stdio.h>
int X[2000], Y[2000];
int ans[4000];//18:55�Q��i�H�}big array
int tableA[100002];//�C�����n�ۤv�M��
int tableB[100002];
int main()
{
    int A,B;
    while( scanf("%d%d", &A, &B)==2 ){
        if(A==0&&B==0)break;
        for(int i=0; i<=100000; i++){
            tableA[i]=0;
            tableB[i]=0;
        }//18:57

        for(int i=0; i<A; i++){
            scanf("%d", &X[i]);
            tableA[ X[i] ]++;
        }
        for(int i=0; i<B; i++){
            scanf("%d", &Y[i]);
            tableB[ Y[i] ]++;
        }
        //18:53:
        //A������B�S��,�i�洫 ++ (�e���O��repeat card)
        //B������A�S��,�i�洫 ++ (�e���O��repeat card)
        //�i��n merge, �A�Х� A�ƶq,B�ƶq
        int ansA=0, ansB=0;
        for(int i=1; i<=100000; i++){
            if(tableA[i]>0 && tableB[i]==0 ) ansA++;
            if(tableA[i]==0&& tableB[i]>0) ansB++;
        }
        if(ansA<ansB) printf("%d\n", ansA);
        else printf("%d\n", ansB);
    }
}
/* Input
1 1
1000
1000
3 4
1 3 5
2 4 6 8
10 9
1 1 2 3 5 7 8 8 9 15
2 2 2 3 4 6 10 11 11
0 0
*/

/* deleted sorting
        for(int i=0; i<A; i++){
            for(int j=i+1; j<A; j++){
                if(A[i]>A[j]){
                    int temp=A[i];
                    A[i]=A[j];
                    A[j]=temp;
                }
            }
        }
        for(int i=0; i<B; i++){
            for(int j=i+1; j<B; j++){
                if(B[i]>B[j]){
                    int temp=B[i];
                    B[i]=B[j];
                    B[j]=temp;
                }
            }
        }*/
