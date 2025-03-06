#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "book.h"

Book* initBook(char* title, int total_page) {
    Book* result = (Book*) malloc(sizeof(Book));
    strcpy(result->title, title);
    result->total_page = total_page;
    result->read = 0;
    return result;
}

void readMore(Book *book, int page) {
    if (page <= 0) return;
    (*book).read += page;
    if (book->read > book->total_page) {
        book->read = book->total_page;
    }
}

void printBook(Book book) {
    printf("Title: %s\n", book.title);
    printf(" Read: %d/%d\n", book.read, book.total_page);
    printf("---------\n");
}