#include <stdio.h>
int ans[100];///��Ʀ�32�줸, �n�s 32 bit
int bits=0;
int main()
{
    while(1){///Step01: Input
        int input;
        scanf("%d", &input);
        if(input==0)break;
        ///ex. 10:  %2
        bits=0;///�ثe0��bit
        int parity=0;
        while( input>0 ){///Step02: ��֪k
            int now=input%2; ///�o��̧C��
            input/=2;
            ans[bits]=now;///Step03: �C�@���(����)���}�C
            bits++;///Step04: ��bits���D�{�b���Xbit
            if(now%2==1) parity++;///Step06: parity�p��,���X��1
        }
        printf("The parity of ");
        for(int i=bits-1; i>=0; i--){///Step05:�˵ۦL�}�C
            printf("%d", ans[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }
}
