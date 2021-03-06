# Libbouf
A library on top of LibC that tracks allocations and more...

The libbouf is an 'on-top' C library. It has been designed to be used with Epitech's `libmy` or the very `LibC`.

Summary
* [Get the LibBouf](#get-the-libbouf)
* [Build the LibBouf and build with the LibBouf](#build-the-libbouf-and-build-with-the-libbouf)



## Get the LibBouf

	git clone https://github.com/encein42/libbouf.git

You also may want to add it as a submodule in your working git repository



## Build the LibBouf and build with the LibBouf

Your repo shall be organised like this :

	. #Your working root
	├── libbouf
	│   ├── include
	│   │   └── #LibBouf's headers...
	│   ├── Makefile
	│   ├── README.md
	│   └── srcs
	│       └── #LibBouf's srcs...
	├── #Your Makefile
	├── #Your source files (where ever you want)
	└── include
	    └── #Your headers

**NOTE:** the `WORKING_ROOT/include` directory shall be included (`-Iinclude`) in your compilation. It will contain libbouf's headers (after libbouf compilation).

In your Makefile, add the following lines :

	LDFLAGS += -Llibbouf/
	LDLIBS += -lbouf
	...
	make -C libbouf/

Then, `make` your project.

**NOTE:** Don't forget to add `$(LDFLAGS)` and `$(LDLIBS)`, along with `-Iinclude`

