#!/bin/bash
cc -c *.c
ar rc liball.a *.o
ranlib liball.a
