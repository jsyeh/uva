#include <stdio.h>
char input[200];
int table[256];///256��ASCII�Ÿ�, ��Ӫ�,��X�i�H�]�����i��t��, �p��, -1�O�X��
int main()
{
    for(int i=0;i<256;i++) table[i] = -1;///impossible
    table['0'] = 2;///�p��, �����
    table['1'] = 2;
    table['2'] = 3;
    table['3'] = 4;
    table['4'] = 5;
    table['5'] = 6;
    table['6'] = 7;
    table['7'] = 8;
    table['8'] = 9;
    table['9'] = 10;
    ///for(int i='1'; i<='9'; i++) table[i] = i-'1';///�Q�X�@�ش����k

    table['A'] = 11;
    table['B'] = 12;
    table['C'] = 13;
    table['D'] = 14;
    table['E'] = 15;
    table['F'] = 16;
    table['G'] = 17;
    table['H'] = 18;
    table['I'] = 19;
    table['J'] = 20;
    table['K'] = 21;
    table['L'] = 22;
    table['M'] = 23;
    table['N'] = 24;
    table['O'] = 25;
    table['P'] = 26;
    table['Q'] = 27;
    table['R'] = 28;
    table['S'] = 29;
    table['T'] = 30;
    table['U'] = 31;
    table['V'] = 32;
    table['W'] = 33;
    table['X'] = 34;
    table['Y'] = 35;
    table['Z'] = 36;
    ///for(int i='A'; i<='Z'; i++) table[i] = ??? ;

    table['a'] = 37;
    table['b'] = 38;
    table['c'] = 39;
    table['d'] = 40;
    table['e'] = 41;
    table['f'] = 42;
    table['g'] = 43;
    table['h'] = 44;
    table['i'] = 45;
    table['j'] = 46;
    table['k'] = 47;
    table['l'] = 48;
    table['m'] = 49;
    table['n'] = 50;
    table['o'] = 51;
    table['p'] = 52;
    table['q'] = 53;
    table['r'] = 54;
    table['s'] = 55;
    table['t'] = 56;
    table['u'] = 57;
    table['v'] = 58;
    table['w'] = 59;
    table['x'] = 60;
    table['y'] = 61;
    table['z'] = 62;
    ///for(int i='a'; i<='z'; i++) table[i] = ??? ;

    while( scanf("%s", input) == 1){
        int ans= -1; ///���X�z
        for(int i=0; input[i] != '\0'; i++){///�� input[i] �������L�@������k
            int now = input[i];///�{�b ���@�Ӧ�ƪ��r�� now
            if( table[now]>0 ){///�d��, �X�k���r��
                if( table[now] > ans ) ans = table[now];
            }else {///���D�k���r��
                ans= -1;/// ���X�z
                break;///�����äF�ǪF��, �n����,����
            }
        }
        if(ans== -1 ) printf("such number is impossible!\n");///���X�z
        else printf("%d\n", ans);
    }
}
