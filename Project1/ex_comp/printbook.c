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

int readBookData(FILE* f, Book* books, int maxSize)
{
    int count = 0;
    for (int i = 0; i < maxSize; i++) {
        if (!feof(f)) {
            if (fread(&(books[i]), sizeof(Book), 1, f) == 1) {
                count++;
            }
            else { // 데이터 읽지 못함. EOF일 가능성이 높음
                break; 
            }
        }
    }
    return count;
}


int main(void)
{
    Book book = { "Python Language", "Miyoung Kim", 2023, 27000.0, "1111223333324" };
    
    FILE* f = fopen("books.data", "r+b");
    if (f != NULL) {
        fseek(f, sizeof(Book), SEEK_SET);
        fwrite(&book, sizeof(Book), 1, f);
        fclose(f);
    }
    return 0;
}