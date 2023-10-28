#!/bin/bash
#include "main.h"
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
