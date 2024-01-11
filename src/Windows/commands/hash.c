#include "hash.h"

const unsigned long long hash(unsigned char *str)
{
    unsigned long long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}