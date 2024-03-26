#!/bin/bash
gcc -I./ -c -fPIC *.c
gcc -I./ -shared -o liball.so *.o
