# bib2x

A fork of [bib2x](http://www.xandi.eu/bib2x) by Alexander Feder.

The codebase is almost identical to the original, with some very minor (non-functional) changes 
to compile on modern platforms.

## Building

Building requires:

- A C++ toolchain,
- `bison` and `flex` parser-lexer generator, 
- and `CMake`.

In the root source directory, execute

```bash
mkdir build && cd ./build              # Create a build directory
cmake -DCMAKE_INSTALL_PREFIX=../out .. # ../out is the install directory
make install
```

You find built executable at `out/bin/bib2x', along with a few example templates in `out/templates`.

On newer MacOS you may need to regenerate the configuration script by running 

```
autoreconf -fi
```


Contents of the original packaged `README`
-------------------------------------------

```
Bib2x (c) by Alexander Feder
----------------------------

please consult http://www.xandi.eu/bib2x
```
