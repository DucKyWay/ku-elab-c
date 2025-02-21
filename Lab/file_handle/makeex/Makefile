SHELL := bash
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
OBJ = text_io.o binary_io.o main.o 
TARGET = book_manager

run: compile_all
	./$(TARGET)

compile_all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c book.h text_io.h binary_io.h
	$(CC) $(CFLAGS) -c main.c

text_io.o: text_io.c text_io.h book.h
	$(CC) $(CFLAGS) -c text_io.c

binary_io.o: binary_io.c binary_io.h book.h
	$(CC) $(CFLAGS) -c binary_io.c

clean:
	rm -f $(OBJ) $(TARGET)