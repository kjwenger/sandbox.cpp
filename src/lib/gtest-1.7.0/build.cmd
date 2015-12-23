@MKDIR build
@CHDIR build
@REM @CMAKE -Dgtest_build_samples=ON -G "MinGW Makefiles" ..
@CMAKE -Dgtest_build_samples=ON ..
@CMAKE --build .
@COPY /B Debug\gtest.lib ..\..\..\..\lib\test
@COPY /B Debug\gtest_main.lib ..\..\..\..\lib\test
@CHDIR ..
