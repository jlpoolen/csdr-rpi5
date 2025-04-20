// test_add_ff.c
#include <stdio.h>
#include "../libcsdr.h"

int main() {
    float a[] = {1.0, 2.0, 3.0, 4.0};
    float b[] = {0.5, 0.5, 0.5, 0.5};
    float out[4];

    add_ff(a, b, out, 4);
    for (int i = 0; i < 4; ++i)
        printf("%.2f + %.2f = %.2f\n", a[i], b[i], out[i]);

    return 0;
}
