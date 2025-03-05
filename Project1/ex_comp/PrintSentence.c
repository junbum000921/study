#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

#define MAX_INDEX_SIZE 30
#define MAX_SENTENCE_SIZE 512

int buildIndices(long* indices, int maxSize, FILE* fr)
{
    indices[0] = 0;
    int count = 1;
    if (fr != NULL) {  
        char ch;
        do {
            ch = fgetc(fr);
            if (ch == '.') {
                ch = fgetc(fr);            
                if (ch != EOF) {
                    indices[count] = ftell(fr);  
                    count++;
                }
            }
        } while (ch != EOF);
    }
    return count;
}

char* readSentence(char* buffer, int len, FILE* f)
{
    char ch;
    int count = 0;
    do {
        buffer[count] = fgetc(f);
        count++;
    } while (count < len && buffer[count - 1] != '.');
    buffer[count] = '\0';
    return buffer;
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Usage: %s filename\n", argv[0]);
        return 0;
    }
    FILE* f = fopen(argv[1], "rt");
    if (f != NULL) {    
        long indices[MAX_INDEX_SIZE];
        int count = buildIndices(indices, MAX_INDEX_SIZE, f);
    /*    for (int i = 0; i < count; i++) {
            printf("%d\n", indices[i]);
        }*/
        char buffer[MAX_SENTENCE_SIZE];
        int lineNum;
        do {
            printf("출력할 문장의 번호를 입력하시오.: ");
            scanf("%d", &lineNum);
            if (lineNum > 0 && lineNum <= count) {             
                fseek(f, indices[lineNum - 1], SEEK_SET);
                readSentence(buffer, MAX_SENTENCE_SIZE, f);
                printf("%s\n", buffer);
            }
            else { break; }
        } while (1);
        fclose(f);
    }
    else {
        printf("%s file could not be opened.\n", argv[1]);
    }
    return 0;
}
