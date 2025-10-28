#include <stdio.h>

int main(){

    int cnt = 0;
    for ( int i = 100; i < 1000; i ++) {
        int isPrime = 1;

        for ( int j = 2; j < i; j++ ) {
            if ( i % j == 0 ) {
                isPrime = 0;
                break;
            }
        }

        if ( isPrime ) {
            printf("%4d", i);
            cnt ++;

            if ( cnt % 8 == 0 ) {
                printf("\n");
            }
        }
    }

    return 0;

}