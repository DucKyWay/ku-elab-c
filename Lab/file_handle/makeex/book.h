#ifndef BOOK_H
#define BOOK_H

typedef struct __Book {
    char title[100];
    int total_page;
    int read;
} Book;

void printBook(Book);
void readMore(Book*, int);
Book* initBook(char*, int);

#endif