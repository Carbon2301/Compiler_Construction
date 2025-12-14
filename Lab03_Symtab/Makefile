CC = gcc
CFLAGS = -Wall -Wextra -g -std=c99
LDFLAGS = 

TARGET = symtab
SOURCES = main.c \
          scanner.c \
          error.c \
          charcode.c \
          parser.c \
          symtab.c \
          debug.c \
          token.c \
          reader.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = scanner.h \
          error.h \
          charcode.h \
          parser.h \
          symtab.h \
          debug.h \
          token.h \
          reader.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
	@echo "Clean completed."

rebuild: clean all

.PHONY: all clean rebuild run test

