#!/bin/bash
gcc -l. -c -fPIC *.c
gcc -l. -shared -o liball.so *.o
