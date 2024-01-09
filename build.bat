IF NOT EXIST "./bin/Windows" (
    mkdir "./bin/Windows"
)

gcc ./src/Windows/bunsen.c ./src/Windows/cli.c ./src/Windows/hash.c ./src/Windows/periodic.c -o ./bin/Windows/Bunsen.exe