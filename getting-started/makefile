
CC = g++ # Define the compiler
CFLAGS = -Wall -Wextra -std=c++11 # Compiler flags

# Sample usage: make hello-world, if filename is hello-world.cpp
# Rule to build and run the specified .cpp file
%: %.cpp
	$(CC) $(CFLAGS) -o $@ $<
	./$@
	rm $@ 

# Ensure that rules are not treated as filenames
.PHONY: %