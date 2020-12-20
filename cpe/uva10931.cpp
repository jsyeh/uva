#include <stdio.h>
int ans[100];///整數有32位元, 要存 32 bit
int bits=0;
int main()
{
    while(1){///Step01: Input
        int input;
        scanf("%d", &input);
        if(input==0)break;
        ///ex. 10:  %2
        bits=0;///目前0個bit
        int parity=0;
        while( input>0 ){///Step02: 剝皮法
            int now=input%2; ///得到最低位
            input/=2;
            ans[bits]=now;///Step03: 每一位數(答案)放到陣列
            bits++;///Step04: 用bits知道現在有幾bit
            if(now%2==1) parity++;///Step06: parity計算,有幾個1
        }
        printf("The parity of ");
        for(int i=bits-1; i>=0; i--){///Step05:倒著印陣列
            printf("%d", ans[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
}
