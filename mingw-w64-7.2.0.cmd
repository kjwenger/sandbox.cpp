@echo off
@setlocal
@set PATH=D:\Development\mingw-w64\i686-7.2.0-posix-dwarf-rt_v5-rev1\mingw32\bin;%PATH%
@make GENERATOR="MinGW Makefiles" TOOLCHAIN="mingw-w64-7.2.0" %*
@endlocal
