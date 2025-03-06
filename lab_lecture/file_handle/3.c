#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Book {
    char title[100];
    int total_page;
    int read;
};

typedef struct __Book Book;

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

int main() {
    int size = 2;
    Book* books[size];

    for (int i = 0; i < size; ++i) {
        books[i] = (Book*) malloc(sizeof(Book));
    }

    snprintf(books[0]->title, sizeof(books[0]->title), "C Programming");
    books[0]->total_page = 300;
    books[0]->read = 120;

    snprintf(books[1]->title, sizeof(books[1]->title), "Java for Beginner");
    books[1]->total_page = 450;
    books[1]->read = 200;

    write_books_to_binary("books.dat", books, size);
    printf("Books written to text file.\n");

    for (int i = 0; i < size; ++i) {
        free(books[i]);
    }
 
    return 0;
}