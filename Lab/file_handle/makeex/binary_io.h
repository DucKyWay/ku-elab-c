#ifndef BINARY_IO_H
#define BINARY_IO_H

#include "book.h"

Book** read_books_from_binary(const char* filename, int* count);
void write_books_to_binary(const char* filename, Book** books, int count);

#endif