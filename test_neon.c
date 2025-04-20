/*
Compiles with:
cc -O3 -mfpu=neon -march=armv8-a+simd -o neon_test neon_test.c
./neon_test
*/
#include <arm_neon.h>
#include <stdio.h>

int main() {
    float32x4_t a = {1.0, 2.0, 3.0, 4.0};
    float32x4_t b = {5.0, 6.0, 7.0, 8.0};
    float32x4_t result = vaddq_f32(a, b);
    float out[4];
    vst1q_f32(out, result);
    printf("NEON Result: %f %f %f %f\n", out[0], out[1], out[2], out[3]);
    return 0;
}
