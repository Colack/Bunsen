#include "cli.h"

static const char commands[][MAX_STRING] = {
    "help",
    "credits",
    "hash",
    "repository",
    "update",
    "version",
    "periodicTable",
    "atomicNumber",
    "electronConfig",
    "element",
    "elementDetails",
    "elementName",
    "elementSymbol",
    "group",
    "isotopeWeight",
    "nobleGasConfig",
    "wavelength"
};

static void cli_startMenu() {
    printf("   _    \n");
    printf("  | |       Periodic Bunsen CLI v%d.%d.%d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH);
    printf("  / \\      Type 'help' to see a list of commands.\n");
    printf(" /   \\ \n");
    printf("(_____)\n");
}

static void cli_commandHandler(char *command, char *args[]) {
    unsigned long long _hash = hash(command);
}

static void cli_help() {
    printf("   _    \n");
    printf("  | |       Periodic Bunsen CLI v%d.%d.%d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH);
    printf("  / \\      Help Menu\n");
    printf(" /   \\ \n");
    printf("(_____)\n");

    printf("\nWelcome to Periodic Bunsen, a free & open source CLI application used to work with chemistry and its different fields & aspects.\n");
    printf("")

}

static void cli_credits() {

}

static void cli_hash(char *string) {
    printf("%llu\n", hash(string));
}

const unsigned long long hash(unsigned char *str) {
    unsigned long long hash = 5381;
    int c;

    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    return hash;
}

void cli_init(int argc, char *argv[]) {
    if (argc > 1) {
        cli_commandHandler(argc, argv);
    } else {
        cli_startMenu();
    }
}