# rtc-digit-count
Here's a few benchmarks on a few common operating system/compiler platforms. Although feel free to try it out on more and let me know if you do/what scores you get! Cheers! (Click each of the badges below to be taken to the respective benchmarks). Also I will add some instructions for building below.

### The Libraries
- [rtc-digit-count](https://github.com/nihilai-collective/rtc-digit-count)
- lemire-digit-count
- fast-digit-count
- std Library

### By OS/Compiler:
----
#### Note:
Examples of some of the data that was used in these tests is available [here](./example-data)

#### Linux/Clang:
----
![Linux/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/rtc-digit-count/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)

- [32-bit](./Linux-Clang-digit-counting-uint32_t.md)
- [64-bit](./Linux-Clang-digit-counting-uint64_t.md)

#### Linux/GCC:
----
![Linux/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/rtc-digit-count/Benchmark.yml?style=plastic&logo=linux&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)

- [32-bit](./Linux-GCC-digit-counting-uint32_t.md)
- [64-bit](./Linux-GCC-digit-counting-uint64_t.md)

#### Windows/MSVC:
----
![Windows/MSVC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/rtc-digit-count/Benchmark.yml?style=plastic&logo=Microsoft&logoColor=green&label=MSVC&labelColor=pewter&color=blue&branch=benchmarking-newer)

- [32-bit](./Windows-MSVC-digit-counting-uint32_t.md)
- [64-bit](./Windows-MSVC-digit-counting-uint64_t.md)

#### macOS/Clang:
----
![macOS/Clang](https://img.shields.io/github/actions/workflow/status/nihilai-collective/rtc-digit-count/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=Clang&labelColor=pewter&color=blue&branch=benchmarking-newer)

- [32-bit](./macOS-Clang-digit-counting-uint32_t.md)
- [64-bit](./macOS-Clang-digit-counting-uint64_t.md)

#### macOS/GCC:
----
![macOS/GCC](https://img.shields.io/github/actions/workflow/status/nihilai-collective/rtc-digit-count/Benchmark.yml?style=plastic&logo=apple&logoColor=green&label=GCC&labelColor=pewter&color=blue&branch=benchmarking-newer)

- [32-bit](./macOS-GCC-digit-counting-uint32_t.md)
- [64-bit](./macOS-GCC-digit-counting-uint64_t.md)

### Pre-requisites:
---
1. CMake 3.28 or later.
2. A C++20 compliant compiler.
3. Python3 and Seaborn for generating the graphs.

### Build Instructions:
---
1. Clone the repo.
2. Cd into the repo's folder and enter `cmake -S . -B ./Build -DCMAKE_BUILD_TYPE=RELEASE_OR_DEBUG -DCMAKE_CXX_COMPILER=PATH_TO_COMPILER_EXECUTABLE` (NOTE: Optionally set a manual installation path by setting `-DCMAKE_INSTALL_PREFIX=CUSTOM_INSTALLATION_PATH`)
3. Then enter `cmake --build ./Build --config=RELEASE_OR_DEBUG`
4. Then enter `cmake --install ./Build`
5. Run the executable from wherever it was installed to!

#### Note:
These benchmarks were executed using the CPU benchmark library [benchmarksuite](https://github.com/RealTimeChris/benchmarksuite)

> *"Anytime someone comes to you with one benchmark? They have gamed that benchmark."*
> — Matt Kulukundis, CppCon 2017: "Designing a Fast, Efficient, Cache-friendly Hash Table, Step by Step"