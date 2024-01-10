IF NOT EXIST "./bin/Windows" (
    mkdir "./bin/Windows"
)

gcc ./src/Windows/bunsen.c ./src/Windows/lib/cli.c ./src/Windows/lib/hash.c ./src/Windows/lib/periodic.c -o ./bin/Windows/Bunsen.exe