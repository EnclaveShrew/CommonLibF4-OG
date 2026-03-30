# CommonLibF4 - ShrewCustom OG

## General Requirements

### Build Dependencies
* [Visual Studio Community 2026](https://visualstudio.microsoft.com/)
	* Desktop development with C++
	* MSVC v14.50+ build tools
	* Windows SDK
* [CMake 4.0+](https://cmake.org/)
* [vcpkg](https://github.com/microsoft/vcpkg)

### Development
* [clang-format 12.0.0](https://github.com/llvm/llvm-project/releases)

### Build Instructions
```
cmake --preset vs2026-windows-vcpkg
cmake --build build --config Debug
```

## F4SE Plugin Requirements

### End User Dependencies
* [Address Library for F4SE Plugins](https://www.nexusmods.com/fallout4/mods/47327)
* [F4SE](https://f4se.silverlock.org/)

### Development
* [Address Library for F4SE Plugins](https://www.nexusmods.com/fallout4/mods/47327)
