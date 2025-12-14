CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = semantics
SRCDIR = .
TESTDIR = tests

SOURCES = main.c \
          parser.c \
          scanner.c \
          reader.c \
          semantics.c \
          symtab.c \
          error.c \
          debug.c \
          charcode.c \
          token.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = parser.h \
          scanner.h \
          reader.h \
          semantics.h \
          symtab.h \
          error.h \
          debug.h \
          charcode.h \
          token.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET) $(TARGET).exe

rebuild: clean all


