#include "cli.h"
#include "hash.h"

// @Path src\cli.c
// Contains the CLI function(s)

static const char commands[][MAX_STRING] = {
    "getName",
    "getSymbol",
    "getElement",
    "getAtomicNumber",
    "getElementGroup",
    "getNGConfig",
    "getMolarMass",
    "getElectronConfig",
    "getElementDetails",

    "listAllElements",
    "listAllElementGroups",
    "listAllElementsInGroup",

    "help",
    "version",
    "credits",
    "repo",
};

static void credits()
{
    printf("Periodic Bunsen CLI v%d.%d.%d (c) %s %d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH, COM_WATERMELONKATANA_AUTHOR, COM_WATERMELONKATANA_YEAR);
    printf("This program is licensed under the %s license.\n", COM_WATERMELONKATANA_LICENSE);
    printf("This program is open source and can be found at %s\n", COM_WATERMELONKATANA_REPOSITORY);
    printf("Contributors:\n");
    for (int i = 0; i < sizeof(contributors) / sizeof(contributors[0]); i++)
    {
        printf("%s\n", contributors[i]);
    }
}

static void repo()
{
    printf("Periodic Bunsen CLI v%d.%d.%d (c) %s %d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH, COM_WATERMELONKATANA_AUTHOR, COM_WATERMELONKATANA_YEAR);
    printf("This program is licensed under the %s license.\n", COM_WATERMELONKATANA_LICENSE);
    printf("This program is open source and can be found at %s\n", COM_WATERMELONKATANA_REPOSITORY);
}

static void help()
{
    printf(
        " -- GET Commands --\n"
        "getName : Get the name of an element from its symbol.\n"
        "getSymbol : Get the symbol of an element from its name.\n"
        "getElement : Get the element from its atomic number.\n"
        "getElementDetails : Get the details of an element from its name or symbol.\n"
        "getAtomicNumber : Get the atomic number of an element from its name or symbol.\n"
        "getElementGroup : Get the element group of an element from its name or symbol.\n"
        "getNGConfig : Get the noble gas configuration of an element from its name or symbol.\n"
        "getMolarMass : Get the molar mass from an element and the number of atoms.\n"
        "getElectronConfig : Get the electron configuration of an element from its name or symbol.\n\n\n"

        " -- LIST Commands --\n"
        "listAllElements : List all elements.\n"
        "listAllElementGroups : List all element groups.\n"
        "listAllElementsInGroup : List all elements in a given group.\n\n\n"

        " -- CLI Commands --\n"
        "help : Prints the help message.\n"
        "version : Prints the version of the program.\n"
        "credits : Prints the credits of the program.\n"
        "repo : Prints the repository of the program.\n");
}

static void version()
{
    printf("Periodic Bunsen CLI v%d.%d.%d (c) %s %d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH, COM_WATERMELONKATANA_AUTHOR, COM_WATERMELONKATANA_YEAR);
}

static void command(unsigned char command[MAX_STRING])
{
    printf("\n");

    unsigned long long _hash = hash(command);

    switch (_hash)
    { 

    case CMD_GET_NAME_HASH:
    {
        char _element[MAX_STRING];
        printf("Enter the symbol of the element: ");
        scanf("%s", _element);
        api_getElementName(_element);
        break;
    }

    case CMD_GET_SYMBOL_HASH:
    {
        char _element[MAX_STRING];
        printf("Enter the name of the element: ");
        scanf("%s", _element);
        api_getElementSymbol(_element);
        break;
    }

    case CMD_GET_ELEMENT_HASH:
    {
        int _element;
        printf("Enter the atomic number of the element: ");
        scanf("%d", &_element);
        api_getElement(_element);
        break;
    }

    case CMD_GET_ATOMIC_NO_HASH:
    {
        char _element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", _element);
        api_getAtomicNumber(_element);
        break;
    }

    case CMD_GET_ELEMENT_GR_HASH:
    {
        char _element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", _element);
        api_getElementGroup(_element);
        break;
    }

    case CMD_GET_NG_CFG_HASH:
    {
        int _element;
        printf("Enter atomic number: ");
        scanf("%d", &_element);

        api_getNGConfig(_element);

        break;
    }

    case CMD_GET_MOLAR_MASS_HASH:
    {
        int _element;
        int _atom;
        printf("Enter the atomic number of the element: ");
        scanf("%d", &_element);
        printf("Enter the number of atoms: ");
        scanf("%d", &_atom);
        api_getMolarMass(_element, _atom);
        break;
    }

    case CMD_GET_ELECTRON_CFG_HASH:
    {
        int _element;
        printf("Enter the atomic number of the element: ");
        scanf("%d", &_element);

        api_getElectronConfig(_element);
        
        break;
    }

    case CMD_LIST_ALL_EL_HASH:
    {
        api_listAllElements();
        break;
    }

    case CMD_LIST_ALL_ELL_GR_HASH:
    {
        api_listAllElementGroups();
        break;
    }

    case CMD_LIST_ALL_ELL_IN_GR_HASH:
    {
        char _group[MAX_STRING];
        printf("Enter the name of the group: ");
        scanf("%s", _group);
        api_listAllElementsInGroup(_group);
        break;

    }

    case CMD_HELP_HASH:
    {
        help();
        break;
    }

    case CMD_VERSION_HASH:
    {
        version();
        break;
    }

    case CMD_CREDITS_HASH:
    {
        credits();
        break;
    }

    case CMD_REPO_HASH:
    {
        repo();
        break;
    }

    case CMD_GET_ELEMENT_DETAILS_HASH:
    {
        char _element[MAX_STRING];
        printf("Enter the name or symbol of the element: ");
        scanf("%s", _element);
        api_getElementDetails(_element);
        break;
    }

    default:
        printf("Command not found.\nType 'help' to see a list of commands.\n");
        break;
    }
}

void cli(int argc, char* argv[])
{
    // If there are no arguments
    if (argc == 1)
    {
        printf("Periodic Bunsen CLI v%d.%d.%d (c) %s %d\n", COM_WATERMELONKATANA_VERSION_MAJOR, COM_WATERMELONKATANA_VERSION_MINOR, COM_WATERMELONKATANA_VERSION_PATCH, COM_WATERMELONKATANA_AUTHOR, COM_WATERMELONKATANA_YEAR);
        printf("Type 'help' to see a list of commands.\n");
    } else if (strcmp(argv[1], "hash") == 0) {
        if (argc == 3) {
            printf("%llu\n", hash(argv[2]));
        } else {
            printf("Usage: bunsen hash <string>\n");
        }
    } else {
        for (int i = 1; i < argc; i++)
        {
            command(argv[i]);
        }
    }
}