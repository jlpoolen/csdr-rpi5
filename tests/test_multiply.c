// $Header$
// Test program for multiply_realvector_with_scalar() from libcsdr
// compile with:
//    gcc -O2 -o test_multiply test_multiply.c libcsdr.a -lm
//
#include <stdio.h>
#include "libcsdr.h"

int main() {
    float input[]  = {1.0, 2.0, 3.0, 4.0};
    float output[4];
    float scalar = 2.0;

    multiply_realvector_with_scalar(input, scalar, output, 4);

    printf("Result: ");
    for (int i = 0; i < 4; ++i) {
        printf("%.2f ", output[i]);
    }
    printf("\n");

    return 0;
}
