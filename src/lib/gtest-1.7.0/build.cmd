@MKDIR build
@CHDIR build
@CMAKE -Dgtest_build_samples=ON -G "MinGW Makefiles" ..
@MAKE
@COPY /B libgtest.a ..\..\..\..\lib\test
@COPY /B libgtest_main.a ..\..\..\..\lib\test
@CHDIR ..
