#include <stdio.h>
char line[2000];///�̭���r��
int table[26]={};///�έp�r���X�{�����,���M��0
int main()
{
    scanf("%s", line);
    for(int i=0; line[i]!=0; i++){
        char c=line[i];
        if(c>='A' && c<='Z') table[ c-'A' ]++;///�j�g�r��
        if(c>='a' && c<='z') table[ c-'a' ]++;///�p�g�r��
    }
    int bad=0;///�@�}�l�٨S�������a��������
    for(int i=0; i<26-1; i++){
        if( table[i]<table[i+1] ) bad=1;///�j�p���Ǥ���,�N�a�F
    }   ///�ڰ��]�e��ۦP�� aabb �]�O beautiful word
    if(bad==0) printf("It's a beautiful word.\n");
    else printf("It's not a beautiful word.\n");
}
