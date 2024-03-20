# SDL2Test

This is a minimal C++ application using SDL2 with CMake.

It is based on the following resources:

- [Using SDL2 with CMake](https://trenki2.github.io/blog/2017/06/02/using-sdl2-with-cmake/)
- [StackOverflow answer that navigated me through the most basic SDL concepts](https://stackoverflow.com/questions/21007329/what-is-an-sdl-renderer/21007477#21007477)
- [The SDl2 Tutorial by GLUSoft](https://glusoft.com/sdl2-tutorials/)

## Prerequisites

### MacOS

Given you have [brew](https://brew.sh) and the XCode command line tools (`xcode-select -install`) You can install SDL2 for development via:

```sh
brew install cmake
brew install sdl2
```

### Linux

```sh
sudo apt install libsdl2-dev cmake g++
```

### Windows

- Install cmake
- Install the latest development archive for windows from the [SDL2 releases page](https://github.com/libsdl-org/SDL/releases/latest).
- Unpack that somewhere
- Configure cmake to find that directory

To configure CMake to find SDL2, use this configuration, name it `sdl2-config.cmake` and put it next to where you downloaded the development libraries. This is based on the [blog linked above](https://trenki2.github.io/blog/2017/06/02/using-sdl2-with-cmake/).

```cmake
set(SDL2_INCLUDE_DIRS "${CMAKE_CURRENT_LIST_DIR}/include")

# Support both 32 and 64 bit builds
if (${CMAKE_SIZEOF_VOID_P} MATCHES 8)
  set(SDL2_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/lib/x64/SDL2.lib;${CMAKE_CURRENT_LIST_DIR}/lib/x64/SDL2main.lib")
else ()
  set(SDL2_LIBRARIES "${CMAKE_CURRENT_LIST_DIR}/lib/x86/SDL2.lib;${CMAKE_CURRENT_LIST_DIR}/lib/x86/SDL2main.lib")
endif ()

string(STRIP "${SDL2_LIBRARIES}" SDL2_LIBRARIES)
```
