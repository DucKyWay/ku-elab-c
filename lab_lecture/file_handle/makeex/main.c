#include <stdio.h>
#include <stdlib.h>
#include "book.h"
#include "text_io.h"
#include "binary_io.h"

void create_books() {
    int count = 2;
    Book* books[2];

    books[0] = (Book*) malloc(sizeof(Book));
    books[1] = (Book*) malloc(sizeof(Book));

    snprintf(books[0]->title, sizeof(books[0]->title), "C Programming");
    books[0]->total_page = 300;
    books[0]->read = 120;

    snprintf(books[1]->title, sizeof(books[1]->title), "Java for Beginner");
    books[1]->total_page = 450;
    books[1]->read = 200;

    write_books_to_text("books.txt", books, count);
    write_books_to_binary("books.dat", books, count);

    printf("Books saved to text and binary files.\n");

    for (int i = 0; i < count; i++) {
        free(books[i]);
    } 
}

int main() {
    // create_books();
    int size;
    Book** books = read_books_from_binary("books.dat", &size);
    readMore(books[0], 1);
    for (int i = 0; i < size; ++i) {
        printBook(*books[i]);
    } 
    write_books_to_binary("books.dat", books, size);

    for (int i = 0; i < size; ++i) {
        free(books[i]);
    }
    return 0;
}