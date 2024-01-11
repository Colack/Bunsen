#ifndef HELP_H
#define HELP_H

#include "../common.h"

#define HELP_COMMAND "help"
#define HELP_DESCRIPTION "Displays help information."
#define HELP_USAGE "help <command>"
#define HELP_HELP \
    "Displays help information.\n" \
    "\n" \
    "Usage: help <command>\n" \
    "\n" \
    "Arguments:\n" \
    "  <command>    The command to display help information for.\n" \
    "\n" \
    "Example:\n" \
    "  help hash\n" \
#define HELP_ALIASES "help, h, ?"

void help(unsigned char command[MAX_STRING]);

#endif