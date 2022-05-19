# C Data Structures and Algorithms
## Author
Psideralis
## License
GNU General Public License 3.0 & Psideralis Copyright Commune Public License
## Description
A C collection of data structures and classic algorithms.

## Data Types
### Native
    - auto
    - void
    - char
    - signed char
    - unsigned char
    - short
    - short int
    - signed short
    - signed short int
    - unsigned short
    - unsigned short int
    - int
    - signed
    - signed int
    - unsigned
    - unsigned int
    - long
    - long int
    - signed long
    - signed long int
    - unsigned long
    - unsigned long int
    - long long
    - long long int
    - signed long long
    - signed long long int
    - unsigned long long
    - unsigned long long int
    - float
    - double
    - long double
    - long long double
    . uint_8
    - uint_16
    - uint_32
    - uint_64
    - size_t

### User Defined:
    - unions
    - structs
    - pointers
    - arrays
    - typedef

## Manual

### Include

    #include "PsideralisDataStructures.h"

    /*
        TODO
    */

### Shared Library
#### Static

    PsideralisDataStructures.lib: Windows
    PsideralisDataStructures.s: Linux & Android & MacOS & iOS

#### Dynamic

    PsideralisDataStructures.dll: Windows
    PsideralisDataStructures.so: Linux & Android
    PsideralisDataStructures.dylib: MacOS & iOS


### Install

    make build platform="LINUX" OR "WINDOWS" OR "MAC"
    make install platform="LINUX" OR "WINDOWS" OR "MAC"

    or

    Windows:
        install.bat

    Linux & Mac:
        install.sh

### Uninstall

    make uninstall platform="LINUX" OR "WINDOWS" OR "MAC"
 
    or

    Windows:
        uninstall.bat

    Linux & Mac:
        uninstall.sh

### Test

    make test platform="LINUX" OR "WINDOWS" OR "MAC"
    ./test

### Benchmark

    make benchmark platform="LINUX" OR "WINDOWS" OR "MAC"
    ./benchmark