PROJECT_SOURCE_DIR?=.
PROJECT_BINARY_DIR?=build
CMAKE_ARGS?=
ifdef TOOLCHAIN
    CMAKE_ARGS+= -DCMAKE_TOOLCHAIN_FILE=../toolchain/${TOOLCHAIN}.cmake
    PROJECT_BINARY_DIR=build.${TOOLCHAIN}
endif

all: build

# http://cprieto.com/posts/2016/10/cmake-out-of-source-build.html
.PHONY: configure
configure:
	cmake -H${PROJECT_SOURCE_DIR} -B${PROJECT_BINARY_DIR} ${CMAKE_ARGS}

${PROJECT_BINARY_DIR}/Makfile: configure

.PHONY: build
build: ${PROJECT_BINARY_DIR}/Makfile
	cmake --build ${PROJECT_BINARY_DIR}

.PHONY: clean
clean:
	make -C ${PROJECT_BINARY_DIR} clean

.PHONY: test
test:
	make -C ${PROJECT_BINARY_DIR} test
