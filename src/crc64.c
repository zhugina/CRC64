#include "crc64.h"

uint64_t crc64(const uint8_t *data, size_t len)
{
    uint64_t crc = 0;
    for (size_t i = 0; i < len; i++)
    {
        crc ^= (uint64_t)data[i] << 56;
        for (int j = 0; j < 8; j++)
        {
            if (crc & (1ULL << 63))
                crc = (crc << 1) ^ ECMA_182;
            else
                crc <<= 1;
        }
    }
    return crc;
}