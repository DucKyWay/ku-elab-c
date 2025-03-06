#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Book {
    char title[100];
    int total_page;
    int read;
};

typedef struct __Book Book;

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

int main() {
    int size;
    Book** readBooks = read_books_from_binary("books.dat", &size);
    for (int i = 0; i < size; ++i) {
        printf("Title: %s\n", readBooks[i]->title);
        printf(" Read: %d/%d\n", readBooks[i]->read, readBooks[i]->total_page);
        printf("------\n");
    }
    return 0;
}