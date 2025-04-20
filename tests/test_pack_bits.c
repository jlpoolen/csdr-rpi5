// test_pack_bits.c
#include <stdio.h>
#include "../libcsdr.h"

int main() {
	unsigned char input[8] = {1,0,1,0,1,0,1,0}; // will become 0xAA
	unsigned char packed = pack_bits_8to1_u8_u8(input);
	
	unsigned char unpacked[8] = {0};
	pack_bits_1to8_u8_u8(&packed, unpacked, 1);  // input_size = 1 byte = 8 bits
	
	printf("Unpacked bits: ");
	for (int i = 0; i < 8; ++i) printf("%d ", unpacked[i]);
	printf("\n");
	return 0;
}

