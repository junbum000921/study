#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    const char* fileName = "UserInput.txt";
    printf("Receive input and save to file\n");
    FILE* fw = fopen(fileName, "wt");
    if (fw != NULL) {   
        char temp[SIZE];
        for (int i = 0; i < 3; i++) {
            fgets(temp, SIZE, stdin);
            fputs(temp, fw);
        }
        fclose(fw);
       
        printf("Read file contents and print\n");
        FILE* fr = fopen(fileName, "rt");
        if (fr != NULL) {        
            char* p = fgets(temp, SIZE, fr);
            while (p != NULL) {
                printf("%s", p);
                p = fgets(temp, SIZE, fr);
            }
            fclose(fr);
        }
        else {
            printf("Failed to open file: %s\n", fileName);
        }
    }
    else {
        printf("Failed to open file: %s\n", fileName);
    }
    return 0;
}
