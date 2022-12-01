#include "periodic.h"

// === Thank you Tira! ===

// @Path src\cli.h
// Contains the CLI function(s)

// Contains the commands
static const char commands[][MAX_STRING];

// All contributors
static const char contributors[][MAX_STRING] = {
    "Mike4544"
};

static void credits();
static void repo();
static void help();
static void version();
static void command(unsigned char command[MAX_STRING]);

void cli(int argc, char* argv[]);
