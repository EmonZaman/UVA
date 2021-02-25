#include <stdio.h>
int main()
{
    int a, b, T, i, p, sum;
    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
        scanf("%d %d", &a, &b);
        for (p = a, sum = 0; p <= b; p++) {
            if (p % 2 != 0) {
              sum = sum + p;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}

