#!/bin/bash

set -xe

flags=-lncurses

rm -f ttodo

gcc main.c $flags -o ttodo
