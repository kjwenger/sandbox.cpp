@MKDIR build
@CHDIR build
@CMAKE -G "MinGW Makefiles" ..
@MAKE
@tests
@CHDIR ..