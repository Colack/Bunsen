#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "../common.h"

#define REPOSITORY_COMMAND "repository"
#define REPOSITORY_DESCRIPTION "Open the repository page on GitHub"
#define REPOSITORY_USAGE "repository"
#define REPOSITORY_HELP \
    "Open the repository page on GitHub.\n" \
    "\n" \
    "Usage: repository\n" \
    "\n" \
    "Example:\n" \
    "    repository\n" 
#define REPOSITORY_ALIASES "repository, repo"

void repository();

#endif