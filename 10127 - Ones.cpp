#include <stdio.h>

int main ()
{
    long int n, Input, One, k;

    while (scanf ("%ld", &Input) != EOF) {

        n = One = k = 1;

        while (k!=0) {

            if ( n < Input ) {
                n = ( n * 10 ) + 1;
                One++;
            }

            k = n % Input;
            n = k;
        }

        printf("%ld\n", One);
    }

    return 0;
}
