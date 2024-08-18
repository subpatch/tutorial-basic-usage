# subpatch - tutorial basic usage

This is an example git repository for a tutorial of the
[subpatch](https://subpatch.net/). You can find the tutorial here: 
[Basic usage](https://subpatch.net/tut/basic-usage/).

The project is a very tiny C-library that contains a `add` function that just
adds two integers together. The project contains the following files

* [`libadd.c`](libadd.c): Implementation of the library function
* [`include/libadd/main.h`](include/libadd/main.h): Single header of the library
* [`prog.c`](prog.c): Example program use the library
* [`test.cc`](test.cc): Tests for the library


## How to build

To build the project, execute the commands

    $ cmake -B build . 
    $ cmake --build build


## How to use

The program reads two integers as arguments from the command line and uses the
library function to add them together. The result is printed on the console.
Example:

    $ build/prog 5 6
    11


## How to test

Some tests are already implement in the file `test.c`, but not yet useable. In
the tutorial you add the dependency to
[googletest](https://github.com/google/googletest) . After that the tests are
working.

How to execute the tests:

    $ cmake --build build  # build again after adding the dependency
    $ build/test


## TODOs

Resolve TODOs in `prog.c`
