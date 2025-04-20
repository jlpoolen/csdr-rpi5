#include <stdio.h>
#include <stdint.h>
#include "libcsdr.h"

int main() {
    unsigned char input[] = {0xAA, 0x55}; // 10101010, 01010101
    unsigned char output[16] = {0};
    int input_size = 2;
    int times = 4;

    repeat_u8(input, output, input_size, times);

    printf("Repeated output:\n");
    for (int i = 0; i < input_size * times; ++i) {
        printf("0x%02X ", output[i]);
    }
    printf("\n");
    return 0;
}
