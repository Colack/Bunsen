#include "includes.h"
#include "hash.h"

int main() {
    char str[MAX_STRING];
    printf("Enter a string to hash: ");
    scanf("%s", str);
    unsigned long long _hash = hash(str);
    printf("Hash: %llu", _hash);
    return 0;
}