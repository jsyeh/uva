// 2011-05-02 07:14-07:27, total 13 min
#include <stdio.h>

int main()
{
	int n;
	char line[200];
	while(scanf("%d", &n)==1){
		if(n==0)break;
		printf("#include <stdio.h>\n");
		printf("int main()\n{\n");

		fgets(line, 255, stdin);//delete newline after number
		for(int i=0;i<n;i++){
			fgets(line,255,stdin);
			printf("printf(\"");
			for(int j=0;line[j]!='\0';j++){
				if(line[j]=='\n' || line[j]=='\r'){ }
				else if(line[j]=='"')printf("\\\"");
				else if(line[j]=='\\')printf("\\\\");
				else printf("%c",line[j]);
			}
			printf("\\n\");\n");
		}
		printf("printf(\"\\n\");\n");
		printf("return 0;\n");
		printf("}\n");
	}
	return 0;
}