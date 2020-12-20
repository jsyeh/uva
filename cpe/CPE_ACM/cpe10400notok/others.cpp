#include <stdio.h>
#include <stdlib.h>

int f(int a){
    int i;
    for(i=1;a!=1 ;i++){
        if(a%2==0)
            a/=2;
        else
            a=3*a+1;
    }

    return i;
}

int main()
{
    int a, b, i, max, c, d, tmp;

    while(scanf("%d %d", &a, &b)!=EOF){
        if(a <= b){
            c = a;
            d = b;
        }else{
            c = b;
            d = a;
        }

        max = 0;
        for(i=c; i<=d; i++){
            tmp = f(i);
            if(tmp > max)
                max = tmp;
        }
        printf("%d %d %d\n", a, b, max);
    }
    return 0;
}

