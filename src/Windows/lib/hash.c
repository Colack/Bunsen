#include "hash.h"

// @Path src\hash.h
// Contains the hash function for the project.

const unsigned long long hash(unsigned char *str)
{
    unsigned long long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}