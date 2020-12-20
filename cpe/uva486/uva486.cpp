#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
///int array1[300];
///int array2[300];
int value[1000];
int AB[1000];
int N;
void mySort(){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(value[i]>value[j]){
                int temp=value[i];
                value[i]=value[j];
                value[j]=temp;
                temp=AB[i];
                AB[i]=AB[j];
                AB[j]=temp;
            }
        }
    }
}
///(1) A>B: AB,A
///(2) A<B: AB,B
///(3) A=B: AB
///(4) disjoint: A,B
///(5) nothing: A,B,AB
void myAns()
{
    int hasA=0, hasB=0, hasAB=0;
    for(int i=0;i<N;i++){
        ///printf("%d(%d)\n", value[i], AB[i]);
        if(i<N-1 && value[i] == value[i+1]){
            hasAB=1;
            i++;
        }else{
            if(AB[i]==1)hasA=1;
            if(AB[i]==2)hasB=1;
        }
    }
    ///printf("\nhasA:%d hasB:%d hasAB:%d\n",hasA,hasB,hasAB);
    if(hasA==1&&hasB==1&&hasAB==1){
        printf("I'm confused!\n");
    }else if(hasA==1&&hasB==1){
        printf("A and B are disjoint\n");
    }else if(hasAB==1&&hasA==1){
        printf("B is a proper subset of A\n");
    }else if(hasAB==1&&hasB==1){
        printf("A is a proper subset of B\n");
    }else printf("A equals B\n");
}
char line[2000];
int main()
{
    while(1){
        N=0;
        char* rval=fgets(line, 2000, stdin);
        if(rval==0)break;
        stringstream ss;
        ss << line;
        int temp;
        while(ss>>temp){
            value[N]=temp;
            AB[N]=1;///A
            N++;
        }
        fgets(line, 300, stdin);
        stringstream ss2;
        ss2 << line;
        while(ss2>>temp){
            value[N]=temp;
            AB[N]=2;///B
            N++;
        }
        mySort();
        myAns();
    }
}
