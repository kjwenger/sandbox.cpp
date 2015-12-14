@MKDIR -p build
@CHDIR build
@CMAKE -G "MinGW Makefiles" ..
@MAKE
@CHDIR ..