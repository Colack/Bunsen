#pragma ONCE

#ifndef CLI_H
#define CLI_H

#include "common.h"

static const char commands[][MAX_STRING];
static const char contributors[][MAX_STRING];

void cli_init(int argc, char *argv[]);
static void cli_commandHandler(char *command, char *args[]);

static void cli_startMenu();

/*
    Commands
*/

static void cli_help(char *string);
static void cli_credits();
static void cli_hash(char *string);
static void cli_repository();
static void cli_update();
static void cli_version();

static void cli_periodicTable();
static void cli_atomicNumber();
static void cli_electronConfig();
static void cli_element();
static void cli_elementDetails();
static void cli_elementName();
static void cli_elementSymbol();
static void cli_group();
static void cli_isotopeWeight();
static void cli_nobleGasConfig();
static void cli_wavelength();

const unsigned long long hash(unsigned char *str);

#endif