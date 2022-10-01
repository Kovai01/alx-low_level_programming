#!/bin/bash
gcc -c ./*.c
ar -rc libmay.h ./*.o
