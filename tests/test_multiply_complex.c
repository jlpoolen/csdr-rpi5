/*
20250420 ChatGPT
$Header: test_multiply_complex.c $
Test for multiply_complexvector_with_scalar_cc()

Compile from within tests subdirdirectory:

    gcc -O2 -o test_multiply_complex test_multiply_complex.c ../libcsdr.a -I.. -lm


Example:
./test_multiply_complex
*/

#include <stdio.h>
#include "libcsdr.h"

int main() {
    complexf input[4] = {
        {1.0, 2.0},
        {3.0, 4.0},
        {-1.0, -2.0},
        {0.5, -0.5}
    };
    complexf output[4];
    float scalar = 2.0;

    multiply_complexvector_with_scalar_cc(input, scalar, output, 4);

    printf("Result:\n");
    for (int i = 0; i < 4; ++i) {
        printf("  %.2f + %.2fi\n", output[i].i, output[i].q);
    }

    return 0;
}
