# Bunsen
Periodic Bunsen is a free & open-source CLI tool used to work with chemistry and its different fields. It is designed to be very simple, user-friendly, and readily-available for all developers. It is written in C and is currently only available for Windows.

## Usage
Periodic Bunsen is a CLI tool, and is designed to be used in the terminal.
There are different commands, some commands require arguments, and some don't. To get a list of commands, use the ```help``` command.

The build command is ```gcc main.c cli.c periodic.c hash.c -o bunsen```. The windows executable is called ```bunsen_win.exe```. The other builds are currently being worked on, executable names for those are coming soon.

## Features
Periodic Bunsen has CLI features, such as periodic table commands and ways to search the periodic table. You can find a list of commands using the ```help``` command.

### Planned features
Periodic Bunsen is still in development, and is not yet complete. Planned features include:

- Calculating the weight of an isotope
- Calculate Lambda
- Calculate Wavelength
- Calculate Energy (Joules)

## Installation

### Releases

#### Windows
Download the latest release from the [releases page](https://github.com/Colack/Bunsen/releases). Extract the zip file, and run the executable.

#### Linux
As of now, there are no releases for Linux. However, you can build the source code yourself.

#### macOS
As of now, there are no releases for macOS. However, you can build the source code yourself.

### Building from source
Periodic Bunsen is written in C, and is compiled using GCC. If you want to test other compilers, you can do so, but it is not guaranteed to work. If you find an error, and it is caused by a compiler, please report it. You can install GCC from [here](https://gcc.gnu.org/).

## Screenshots
<p align="center">
    <img src="https://raw.githubusercontent.com/Colack/Bunsen/main/assets/screen.png" alt="Screenshot 1"/>
</p>
  
## Contributing
Periodic Bunsen is open-source, and is available here on GitHub. If you want to contribute, you can do so by forking the repository, making your changes, and then making a pull request. If you find any bugs, please report them by making an issue.
