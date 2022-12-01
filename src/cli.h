#include "periodic.h"

// @Path src\cli.h
// Contains the CLI function(s)

// Contains the commands
extern char commands[][MAX_STRING];

void credits();
void repo();
void help();
void version();
void command(unsigned char command[MAX_STRING]);

void cli(int argc, char* argv[]);
