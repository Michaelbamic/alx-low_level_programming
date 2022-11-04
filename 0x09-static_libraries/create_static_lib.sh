#!/bin/bash
gcc -Wall -pedantic -Wenor -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
