# bib2x

A fork of [bib2x](http://www.xandi.eu/bib2x) by Alexander Feder.

The codebase is almost identical to the original, with some very minor (non-functional) changes 
to compile on modern platforms.

## Building

Building should only require a compatible shell and a C++ compiler. 

In the source directory, execute

```bash
./configure
make
```

You can execute the built executable through the wrapper script `src/bib2x`. 

The actual built binaries `bib2x` and `lt-bib2x` are under `src/.libs`. 
It seems by default both binaries dynamically links, in addition to the C++ libraries, 
`libodb.so` which is part of the built artifact. 

Execute `make install` to collect and place the built artifacts under system directory.

Alternatively, pass `--prefix=$(pwd)/bin` to the `configure` script to place install the artifact 
under `bin`. In this case you can find the built binary at `bin/bib2x` and the dependency `libodb.so` under `bin/lib`.


Contents of the original packaged `README`
-------------------------------------------

```
Bib2x (c) by Alexander Feder
----------------------------

please consult http://www.xandi.eu/bib2x
```
