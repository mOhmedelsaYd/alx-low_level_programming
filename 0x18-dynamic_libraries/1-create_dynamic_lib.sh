#!/bin/bash

# Get the list of .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files present
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile and create the dynamic library
gcc -shared -o liball.so $c_files

# Verify if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully!"
else
    echo "Failed to create the dynamic library."
fi
