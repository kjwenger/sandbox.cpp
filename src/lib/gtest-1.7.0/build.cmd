@MKDIR -p build
@CHDIR build
@CMAKE -Dgtest_build_samples=ON -G "MinGW Makefiles" ..
@MAKE
@CHDIR ..
