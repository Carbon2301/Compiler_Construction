CC      = gcc
CFLAGS  = -Wall
LIBS    = -lm
SRC     = $(wildcard *.c)
OBJ     = $(SRC:.c=.o)
TARGET  = scanner

.PHONY: all debug clean clean-window

all: $(TARGET)

debug: CFLAGS += -g
debug: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o *~ $(TARGET)

clean-window:
	del /Q *.o $(TARGET)
