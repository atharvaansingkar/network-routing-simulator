# Makefile for compiling the network routing simulator

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99

# Source files
SRCS = router.c network_topology.c routing_algorithms.c packet.c main.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
EXEC = simulator

# Rule to build the executable
$(EXEC): $(OBJS)
    $(CC) $(CFLAGS) -o $@ $^

# Rule to build object files
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
    rm -f $(OBJS) $(EXEC)
