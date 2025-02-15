# cppli error
simple exception class for use with [cppli](https://github.com/original-picture/cppli) applications. 
Lets you specify an error code that will be returned from `main()`  
All exceptions that you throw from your cppli application should be derived from this type

## build
just add [cppli_error](.) to your include paths and `#include "cppli_error.h"`