#ifndef TEXT_IO_H
#define TEXT_IO_H

#include "book.h"

Book** read_books_from_text(const char* filename, int* count);
void write_books_to_text(const char* filename, Book** books, int count);

#endif