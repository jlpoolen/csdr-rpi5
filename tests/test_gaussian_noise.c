// test_gaussian_noise.c
#include <stdio.h>
#include <stdlib.h>
#include "libcsdr.h"

int main() {
    int n = 8;
    complexf output[n];

    FILE* urandom = fopen("/dev/urandom", "rb");
    if (!urandom) {
        perror("Failed to open /dev/urandom");
        exit(EXIT_FAILURE);
    }

    get_random_gaussian_samples_c(output, n, urandom);
    fclose(urandom);

    printf("Gaussian noise output:\n");
    for (int i = 0; i < n; i++) {
        printf("  %.4f + %.4fi\n", output[i].i, output[i].q);
    }

    return 0;
}
