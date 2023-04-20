# RaspberryCar

## error


### 1
  tcl is usually installed in /usr/include/tcl
  and the correct orders of using swig is:
  unix % swig -tcl example.i
  unix % g++ -fpic -c example.cpp example_wrap.c -I/usr/local/include -I/usr/include/tcl
  unix % g++ -shared example.o example_wrap.o -o main.so
  unix % tclsh
  
