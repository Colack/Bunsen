#include "periodic.h"

// @Path src\cli.h
// Contains the CLI function(s)

static const char commands[][MAX_STRING];

static const char contributors[][MAX_STRING] = {
    "Colack",
    "Mike4544"
};

static void credits();
static void repo();
static void help();
static void version();
static void command(unsigned char command[MAX_STRING]);

void cli(int argc, char* argv[]);