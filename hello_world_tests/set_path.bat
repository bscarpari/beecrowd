@echo off
set PATH=%PATH%;C:\Program Files\NASM
nasm -f win64 hello.asm -o hello_asm.obj && gcc hello_asm.obj -o hello_asm.exe && hello_asm.exe 