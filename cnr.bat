@echo off
if "%1"=="" (
    echo Usage: compile_and_run filename
) else (
    g++ %1.cpp -o %1.exe
    %1.exe
)
