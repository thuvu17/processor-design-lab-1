# Week 1: CMake and Toolchain

**Lab Questions:**
* The paths used by target_sources and target_include_directories are relative, not absolute. What file or folder are they relative to?\
  They are relative to where CMakeLists.txt is.

* What are some differences between cmake and ninja?\
  `cmake` is a meta-build system; it produces other build systems that will produce an executable. `ninja` is a build system, one of many that `cmake` can produce (another one is `make`).

* Why is it important to run cmake in its own directory?\
  To keep the source code folder clean, since running cmake can produce many building files that are not code related.
