#include <stdio.h>
#include <stdlib.h>
#include "binary_io.h"

Book** read_books_from_binary(const char* filename, int* count) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Cannot open file to read");
        return NULL;
    }

    fread(count, sizeof(int), 1, file);
    Book** books = (Book**) malloc(*count * sizeof(Book*));

    for (int i = 0; i < *count; ++i) {
        books[i] = (Book*) malloc(sizeof(Book));
        fread(books[i], sizeof(Book), 1, file);
    }

    fclose(file);
    return books;
}

void write_books_to_binary(const char* filename, Book** books, int count) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Cannot open file to write");
        return;
    }

    fwrite(&count, sizeof(int), 1, file);
    for (int i = 0; i < count; ++i) {
        fwrite(books[i], sizeof(Book), 1, file);
    }

    fclose(file);
}