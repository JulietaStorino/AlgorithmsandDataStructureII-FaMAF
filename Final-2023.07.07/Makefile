CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99 -g
SOURCES = main.c playerOnB.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = playerOnB

.PHONY: clean

all: $(TARGET)


valgrind: $(TARGET)
	valgrind --leak-check=full ./$(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LFLAGS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(TARGET)
