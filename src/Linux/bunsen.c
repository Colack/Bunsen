#include "common.h"

char *bunsen_helpMenu()
{
    /*
        -- Periodic Bunsen CLI Help Menu --
        Bunsen is a tool used for working with chemistry and its different fields & aspects.

        Commands:

        help - Display this help menu.
        version - Display the current version of Bunsen.

        -- Element Commands --

        periodicTable - Display the periodic table.
        atomicNumber - Display the atomic number of an element.
        electronConfig - Display the electron configuration of an element.
        atomicMass - Display the atomic mass of an element.
        meltingPoint - Display the melting point of an element.
        boilingPoint - Display the boiling point of an element.
        group - Display the group of an element.
        isotopeWeight - Display the isotope weight of an element.

        -- Other Commands --

        repository - Display the repository of Bunsen.
        license - Display the license of Bunsen.
        about - Display information about Bunsen.

        -- Examples --

        bunsen atomicNumber 1

        -- End of Help Menu --
    */
    return "   -- Periodic Bunsen CLI Help Menu --\nBunsen is a tool used for working with chemistry and its different fields & aspects.\n\nCommands:\n\nhelp - Display this help menu.\nversion - Display the current version of Bunsen.\n\n-- Element Commands --\n\nperiodicTable - Display the periodic table.\natomicNumber - Display the atomic number of an element.\nelectronConfig - Display the electron configuration of an element.\natomicMass - Display the atomic mass of an element.\nmeltingPoint - Display the melting point of an element.\nboilingPoint - Display the boiling point of an element.\ngroup - Display the group of an element.\nisotopeWeight - Display the isotope weight of an element.\n\n-- Other Commands --\n\nrepository - Display the repository of Bunsen.\nlicense - Display the license of Bunsen.\nabout - Display information about Bunsen.\n\n-- Examples --\n\nbunsen atomicNumber 1\n\n-- End of Help Menu --";
}

char *bunsen_aboutMenu()
{
    /*
        # Bunsen

        Periodic Bunsen is a free & open-source CLI tool used to work with chemistry and its different fields & aspects. It was originally created to help students with their chemistry homework, but it can be used by anyone who wants to learn more about chemistry. It is simple, user-friendly, and readily-available for anyone to use. It is written in C and is currently only available for Linux.

        ### Update

        Bunsen was last worked on in 2022, and it is now 2024! I am reviving this project and will be working on it again. I will be adding more features and fixing bugs, along with working on improving my really bad code. I will also be working on a new version of Bunsen once this one is finished. I will be working on this project for the next few months, so stay tuned for updates! (Check the [CHANGELOG](CHANGELOG.md) for more info.)

        ## Usage

        Periodic Bunsen is a CLI tool, and is designed to be used in the terminal. There are different commands, some requiring arguments, that can be used to perform different tasks. To get a list of all the commands, run `bunsen help` in the terminal. To get help with a specific command, run `bunsen help <command>`.

        To build bunsen, go to the `src` folder and view the `README.md` file for instructions.

        ## Contributing

        If you would like to contribute to Periodic Bunsen, please read the CONTRIBUTING.mdbfile for more info.   
        You can also view all upcoming features and what to work on at https://github.com/Colack/Bunsen/issues/1.
    */

    return "# Bunsen\n\nPeriodic Bunsen is a free & open-source CLI tool used to work with chemistry and its different fields & aspects. It was originally created to help students with their chemistry homework, but it can be used by anyone who wants to learn more about chemistry. It is simple, user-friendly, and readily-available for anyone to use. It is written in C and is currently only available for Linux.\n\n### Update\n\nBunsen was last worked on in 2022, and it is now 2024! I am reviving this project and will be working on it again. I will be adding more features and fixing bugs, along with working on improving my really bad code. I will also be working on a new version of Bunsen once this one is finished. I will be working on this project for the next few months, so stay tuned for updates! (Check the [CHANGELOG](CHANGELOG.md) for more info.)\n\n## Usage\n\nPeriodic Bunsen is a CLI tool, and is designed to be used in the terminal. There are different commands, some requiring arguments, that can be used to perform different tasks. To get a list of all the commands, run `bunsen help` in the terminal. To get help with a specific command, run `bunsen help <command>`.\n\nTo build bunsen, go to the `src` folder and view the `README.md` file for instructions.\n\n## Contributing\n\nIf you would like to contribute to Periodic Bunsen, please read the CONTRIBUTING.mdbfile for more info.   \nYou can also view all upcoming features and what to work on at https://github.com/Colack/Bunsen/issues/1.";
}

char *bunsen_commandHandler(int argc, char *argv[])
{
    if (strcmp(argv[1], "help") == 0)
    {
        return bunsen_helpMenu();
    }

    if (strcmp(argv[1], "version") ==0)
    {
        // Cast int to char
        char *version = malloc(10);
        sprintf(version, "%d.%d.%d", BUNSEN_VERSION_MAJOR, BUNSEN_VERSION_MINOR, BUNSEN_VERSION_PATCH);
        return version;
    }

    if (strcmp(argv[1], "repository") == 0)
    {
        return BUNSEN_REPOSITORY;
    }

    if (strcmp(argv[1], "license") == 0)
    {
        return BUNSEN_LICENSE;
    }

    if (strcmp(argv[1], "about") == 0)
    {
        return bunsen_aboutMenu();
    }

    return "Command not found.\nType 'help' to see a list of commands.";
}

char *bunsen_startMenu()
{
    return "   _    \n  | |       Periodic Bunsen CLI v%d.%d.%d\n  / \\      Type 'help' to see a list of commands.\n /   \\ \n(_____)";
}

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf(bunsen_commandHandler(argc, argv));
    } else {
        printf(bunsen_startMenu(), BUNSEN_VERSION_MAJOR, BUNSEN_VERSION_MINOR, BUNSEN_VERSION_PATCH);
    }
    printf("\n");

    return 0;
}