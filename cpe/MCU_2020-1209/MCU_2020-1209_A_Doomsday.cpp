///18:04-18:08
#include <stdio.h>
int days[]={0,31,28,31,30,31,30,31, 31,30,31,30,31};
char line[7][20]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main()
{
    int T;
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        int m, d;
        scanf("%d%d", &m, &d);
        int ans=5+d;
        for(int i=1; i<m; i++){
            ans+=days[i];
        }
        printf("%s\n", line[ans%7]);
    }
}
