#include <stdio.h>
int days[]={0,31,28,31,30,31,30,31, 31,30,31,30,31};
char text[7][20]={"Sunday", "Monday", "Tuesday", "Wednesday",
          "Thursday", "Friday", "Saturday"};///Step04: 0...6
int main()
{
    int T, M, D;///Step01: Input
    scanf("%d", &T);
    for(int t=0; t<T; t++){
        scanf("%d%d", &M, &D );
        int ans=5+D;///Step02: 看行事曆
        for(int i=1; i<M; i++){
            ans += days[i];///Step03: 算出第幾天
        }

        printf("%s\n", text[ ans%7 ] );///Step05: ans%7
    }
}
