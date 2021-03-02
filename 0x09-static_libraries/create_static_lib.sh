#!/bin/bash
gcc -c *.c -fpic
ar -cvr liball.a *.o
