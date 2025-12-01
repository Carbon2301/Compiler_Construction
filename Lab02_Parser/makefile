CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = 
TARGET = parser
SOURCES = main.c parser.c scanner.c reader.c token.c charcode.c error.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = parser.h scanner.h reader.h token.h charcode.h error.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

rebuild: clean all

.PHONY: all clean rebuild

