#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define TITLE_SIZE 128
#define SIZE 32

typedef struct {
    char title[128];
    char author[32];
    int year;
    double price;
    char isbn[32];
} Book;

void printBook(const Book* book)
{
    printf("Title: %s, Author: %s, year = %d, price=%.2f, ISBN = %s\n", 
           book->title, book->author, book->year, book->price, book->isbn); 
}

int main(void) 
{
    Book book = { "C Programming", "Gildong Hong", 2023, 28000.0, "1111223333323" };
    FILE* f = fopen("Book.dat", "wb");
    if (f != NULL) {
        fwrite(&book, sizeof(Book), 1, f);
        fclose(f);
    }
    Book book2;
    f = fopen("Book.dat", "rb");
    if (f != NULL) {
        fread(&book2, sizeof(Book), 1, f);
        fclose(f);
        printBook(&book2);
    }
    return 0;
}