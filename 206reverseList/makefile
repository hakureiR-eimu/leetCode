# this is the build file for project 
# it is autogenerated by the xmake build system.
# do not edit by hand.

ifneq ($(VERBOSE),1)
VV=@
endif

MM=/usr/bin/gcc
CU=/usr/bin/clang
CC=/usr/bin/gcc
MXX=/usr/bin/gcc
AS=/usr/bin/gcc
CXX=/usr/bin/gcc

LD=/usr/bin/g++
AR=/usr/bin/ar
SH=/usr/bin/g++


206reverseList_CXXFLAGS=-m64 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG
206reverseList_CXXFLAGS=-m64 -fvisibility=hidden -fvisibility-inlines-hidden -O3 -DNDEBUG
206reverseList_LDFLAGS=-m64 -s

default:  206reverseList

all:  206reverseList

.PHONY: default all  206reverseList

206reverseList: build/linux/x86_64/release/206reverseList
build/linux/x86_64/release/206reverseList: build/.objs/206reverseList/linux/x86_64/release/src/main.cpp.o
	@echo linking.release 206reverseList
	@mkdir -p build/linux/x86_64/release
	$(VV)$(LD) -o build/linux/x86_64/release/206reverseList build/.objs/206reverseList/linux/x86_64/release/src/main.cpp.o $(206reverseList_LDFLAGS)

build/.objs/206reverseList/linux/x86_64/release/src/main.cpp.o: src/main.cpp
	@echo compiling.release src/main.cpp
	@mkdir -p build/.objs/206reverseList/linux/x86_64/release/src
	$(VV)$(CXX) -c $(206reverseList_CXXFLAGS) -o build/.objs/206reverseList/linux/x86_64/release/src/main.cpp.o src/main.cpp

clean:  clean_206reverseList

clean_206reverseList: 
	@rm -rf build/linux/x86_64/release/206reverseList
	@rm -rf build/linux/x86_64/release/206reverseList.sym
	@rm -rf build/.objs/206reverseList/linux/x86_64/release/src/main.cpp.o

