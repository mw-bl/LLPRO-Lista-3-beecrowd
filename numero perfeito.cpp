#include <stdio.h>
 
int main() {
 
    int N, X, C, n, s = 0;
    
    scanf("%d", &N);
    
    for ( int C = 0; C < N; C++ ) {
        scanf("%d", &X);
        s = 0;
        for ( int n = 1; n < X; n++ ) {
            if ( X % n == 0 ) {
                s += n;
            }
        }
        if ( s == X ) {
            printf("%d eh perfeito\n");
        } else {
            printf("%d nao eh perfeito");
        }   
    }
    return 0;
}
