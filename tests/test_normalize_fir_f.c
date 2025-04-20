// test_normalize.c
#include <stdio.h>
#include <math.h>
#include "../libcsdr.h"

int main() {
    float taps[] = {1.0, 2.0, 3.0, 4.0};
    float out[4];
    normalize_fir_f(taps, out, 4);

    printf("Normalized taps:\n");
    for (int i = 0; i < 4; ++i) printf("  %.4f\n", out[i]);

    return 0;
}
