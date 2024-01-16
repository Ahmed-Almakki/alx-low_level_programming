#!/bin/bash
gcc -L. -c -fpic *.c
gcc -shared -o liball.so *.o
