#include <stdio.h>

int main(){

    int star = 9;
    int blank = 0;

    for ( ; star > 0; star -= 2, blank ++ ) {

        for ( int j = 1; j <= blank; j++ ) {
            printf(" ");
        }

        for ( int i = 1; i <= star; i++ ) {
            printf("*");
        }

        printf("\n");
    }

    return 0;

}