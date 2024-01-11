#ifndef HASH_H
#define HASH_H

#define HASH_COMMAND "hash"
#define HASH_DESCRIPTION "Hashes a string."
#define HASH_USAGE "hash <string>"
#define HASH_HELP \
    "Hashes a string.\n" \
    "\n" \
    "Usage: hash <string>\n" \
    "\n" \
    "Arguments:\n" \
    "  <string>    The string to hash.\n" \
    "\n" \
    "Example:\n" \
    "  hash \"Hello, World!\"\n" \
#define HASH_ALIASES "hash, hashstr, hashstring"

const unsigned long long hash(unsigned char *str);

#endif