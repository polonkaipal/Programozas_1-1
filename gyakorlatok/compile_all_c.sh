#!/usr/bin/env bash

for i in *.c; do echo "$i"; gcc -lm -Wall "$i"; done

# for i in *.c; do echo "$i"; gcc -lm "$i"; done
