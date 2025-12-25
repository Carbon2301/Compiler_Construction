CC = gcc
CFLAGS = -Wall -g -std=c99
LDFLAGS = 
SOURCES = main.c parser.c semantics.c scanner.c token.c symtab.c error.c debug.c reader.c charcode.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = semantics
all: $(TARGET)
$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean rebuild test

