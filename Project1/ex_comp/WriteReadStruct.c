#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TITLE_SIZE 128
#define SIZE 32

typedef struct {
    char title[TITLE_SIZE];
    char author[SIZE];
    int year;
    double price;
    char isbn[SIZE];
} Book;

int writeBooksData(const char* filename, Book* books, int size)
{
    FILE* fw = fopen(filename, "wb");
    if (fw != NULL) {
        fwrite(books, sizeof(Book), size, fw);
        fclose(fw);
        return 1;
    }
    return 0;
}

int readBooksData(const char* filename, Book* books, int size)
{
    FILE* fr = fopen(filename, "rb");
    if (fr != NULL) {
        fread(books, sizeof(Book), size, fr);
        fclose(fr);
        return 1;
    }
    return 0;
}

void printBook(const Book* book)
{
    printf("Title: %s, Author: %s, year = %d, price=%.2f, ISBN = %s\n", 
           book->title, book->author, book->year, book->price, book->isbn); 
}

int main(void)
{
    const char* filename = "books.data";
    Book books[2] = {
        { "C Programming", "Gildong Hong", 2023, 28000.0, "1111223333323" },
        { "C++ Programming", "Gildong Hong", 2024, 29000.0, "1111223333334" }
    };
       
    writeBooksData(filename, books, 2);

    Book books2[2];
    readBooksData(filename, books2, 2);
    for (int i = 0; i < 2; i++) {
        printBook(&(books2[i]));
    }
    return 0;
}