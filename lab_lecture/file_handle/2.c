#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Book {
    char title[100];
    int total_page;
    int read;
};

typedef struct __Book Book;

Book** read_books_from_text(const char* filename, int* count) {
    FILE *file = fopen(filename, "r"); 
    if (!file) {
        perror("Cannot open file to read");
        return NULL;
    }

    fscanf(file, "%d\n", count); 
    Book** books = (Book**) malloc(*count * sizeof(Book*));

    for (int i = 0; i < *count; ++i) {
        books[i] = (Book*) malloc(sizeof(Book));
        fscanf(file, "%99[^,],%d,%d\n", //99[^,] อ่านไปสูงสุด 99 ตัว โดยไม่สนใจ comma
            books[i]->title, &books[i]->total_page, &books[i]->read);
    } 
    // book[i] เป็น pointer ต้องใช้ arrow, ที่อยู่ใน book[i] เป็น int ต้องใช้ &

    fclose(file);
    return books;
}

int main() {
    int size;
    Book** readBooks = read_books_from_text("books.txt", &size);
    for (int i = 0; i < size; ++i) {
        printf("Title: %s\n", readBooks[i]->title);
        printf(" Read: %d/%d\n", readBooks[i]->read, readBooks[i]->total_page);
        printf("------\n");
    }
    
    for (int i = 0; i < size; ++i) {
        free(readBooks[i]);
    }
    free(readBooks);
    return 0;
}