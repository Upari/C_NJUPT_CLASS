#include <stdio.h>

int main(){
    double m = 0;
    double s = 0;

    int flag = 1;

    scanf("%lf", &m);

    for ( int i = 1; i <= 5; i++ ) {
        int below = 1;
        for ( int j = 1; j <= i; j ++ ) {
            below *= j;
        }
        // printf("%d\n", below);

        double top = m;
        for ( int k = 1; k < i; k++ ) {
            top *= m;
        }
        // printf("%d\n", upper);

        s += flag * ( top / below );
        flag *= -1;

    }

    printf("%.2f", s);

    return 0;
    
}