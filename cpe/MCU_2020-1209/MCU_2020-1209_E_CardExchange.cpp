//18:45-18:48 input OK,開始讀題目trade
//18:51 sort OK, 18:53發現本來就排好了, 可刪
//18:59 寫完, 發現 trade 程式理解錯誤, 放棄
//花2分鐘細看,了解只要是不同的,就可以trade
#include <stdio.h>
int X[2000], Y[2000];
int ans[4000];//18:55想到可以開big array
int tableA[100002];//每次都要自己清空
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
        //A有重覆B沒有,可交換 ++ (前提是有repeat card)
        //B有重覆A沒有,可交換 ++ (前提是有repeat card)
        //可能要 merge, 再標示 A數量,B數量
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
