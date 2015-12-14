@MKDIR build
@CHDIR build
@CMAKE -G "MinGW Makefiles" ..
@MAKE
@sandbox_exe
@CHDIR ..