#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXD 1000001

void bigsum(int *, int);
void print(int *, int);

int main(void)
{
    int set, i, m;
    int *sum;

    sum = (int *)malloc(sizeof(int) * MAXD);

    scanf("%d", &set);
    for (i = 0; i < set; i++) {
        /* init */
        memset(sum, 0, MAXD * sizeof(int));
        scanf("%d", &m);
        bigsum(sum, m);
        print(sum, m - 1);
        if (i < set - 1)
            putchar('\n');
    }

    free(sum);

    return 0;
}

/* bigsum: scan two number x, y, then do x + y */
void bigsum(int *sum, int m)
{
    int i, x, y;

    for (i = m - 1; i > - 1; i--) {
        scanf("%d %d", &x, &y);
        sum[i] += x + y;
    }
    /* carry */
    for (i = 0; i < m; i++)
        if (sum[i] > 9) {
            sum[i + 1] += sum[i] / 10;
            sum[i] %= 10;
        }
}

/* print: print out sum */
void print(int *sum, int m)
{
    for (; m > -1; m--)
        printf("%d", sum[m]);
    putchar('\n');
}