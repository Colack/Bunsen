@ECHO OFF
    : Periodic Bunsen build script
    : 2022-11-29 07:21:00 PM

    powershell write-host -fore green Starting Job...

    : Set the path to the src folder
    cd ./src

    powershell write-host -fore red Building Bunsen...

    : Start the build
    gcc main.c cli.c hash.c periodic.c -o bunsen

    if not exist ..\bin MKDIR ..\bin

    : Move the executable to the root directory
    move bunsen.exe ..\bin\

    : Return to the root directory
    cd ..

    : Ask the user if they want to compile Hash-Tool
    powershell write-host -fore green Finished Job...
    powershell write-host -fore green Would you like to compile Hash-Tool?

    set /p compile=Compile Hash-Tool? [Y/N]:

    if %compile%==Y (
        powershell write-host -fore green Compiling Hash-Tool...
        cd ./src
        gcc hashy.c hash.c -o hash-tool
        move hash-tool.exe ..\bin\
        cd ..
        cd ..
        powershell write-host -fore green Finished Job...
    ) else (
        powershell write-host -fore red Skipping Hash-Tool...
        powershell write-host -fore green Finished Job...
    )
        
    EXIT /B 0