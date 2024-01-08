#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <math.h>

// @Path src\includes.h
// Contains all the includes and defines for the project.

#define MAX_STRING 100
#define MAX_ELEMENTS 118
#define MAX_ARRAY 1000

#define VERSION_MAJOR 0
#define VERSION_MINOR 2
#define VERSION_YEAR 2022

#define c 300000000
#define cc 300
#define pi 3.14159265359
#define vv 0.95

#define LICENSE "GNU GPL v3.0"
#define STARTING_MESSAGE "Periodic Bunsen CLI V%d.%d. (c) Jack Spencer %d.\nType 'help' for a list of commands.\n"
#define REPOSITORY "https://github.com/Colack/Bunsen"