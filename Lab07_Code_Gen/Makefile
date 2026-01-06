CC = gcc
CFLAGS = -Wall -g
LDFLAGS = 

TARGET = kplc

SOURCES = main.c \
          charcode.c \
          codegen.c \
          debug.c \
          error.c \
          instructions.c \
          parser.c \
          reader.c \
          scanner.c \
          semantics.c \
          symtab.c \
          token.c

OBJECTS = $(SOURCES:.c=.o)

HEADERS = charcode.h \
          codegen.h \
          debug.h \
          error.h \
          instructions.h \
          parser.h \
          reader.h \
          scanner.h \
          semantics.h \
          symtab.h \
          token.h

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $(TARGET) $(OBJECTS)
	@echo "Build complete: $(TARGET)"


%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET) $(TARGET).exe
	rm -f output*.exe
	@echo "Clean complete"

# Clean and rebuild
rebuild: clean all


