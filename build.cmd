@MKDIR build
@CHDIR build
@REM @CMAKE -G "MinGW Makefiles" ..
@CMAKE ..
@CMAKE --build .
@tests
@CHDIR ..