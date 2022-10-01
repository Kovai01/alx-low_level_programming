#!/bin/bash
gcc -c ./*.c
ar -rc libmay.a ./*.o
