#ifndef CLI_H
#define CLI_H

#include "periodic.h"

static const char commands[MAX_STRING][MAX_STRING];

static const char contributors[][MAX_STRING] = {
    "Colack"
};

static void credits();
static void repo();
static void help();
static void version();
static void command(unsigned char command[MAX_STRING]);
static void startMenu();

void cli(int argc, char* argv[]);

#endif