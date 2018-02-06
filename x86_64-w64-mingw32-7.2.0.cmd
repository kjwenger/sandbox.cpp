@echo off
@setlocal
@set PATH=D:\Development\mingw-w64\x86_64-7.2.0-posix-seh-rt_v5-rev1\mingw64\bin;%PATH%
@make GENERATOR="MinGW Makefiles" TOOLCHAIN="x86_64-w64-mingw32-7.2.0" %*
@endlocal
