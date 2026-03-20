#!/bin/bash

#C++ compiled files
find . -maxdepth 5 -name "a.exe" -type f -print -delete
#Java compiled files
find . -maxdepth 5 -name "*.class" -type f -print -delete