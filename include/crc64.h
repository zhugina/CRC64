#ifndef CRC64
#define CRC64

#include <stdint.h>
#define ECMA_182 0x42F0E1EBA9EA3693

uint64_t crc64(const uint8_t *in, size_t in_length);

#endif