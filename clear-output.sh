#!/bin/bash

#C++ compiled files
find . -maxdepth 5 -name "*.exe" -type f -print -delete
find . -maxdepth 5 -name "*.o" -type f -print -delete
#Java compiled files
find . -maxdepth 5 -name "*.class" -type f -print -delete