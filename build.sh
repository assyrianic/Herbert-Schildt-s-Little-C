#!/bin/bash
cd "$(dirname "$0")"
gcc -std=c11 -ffast-math -g -O3 PARSER.c LITTLEC.c LCLIB.c -o interpreter -lm
