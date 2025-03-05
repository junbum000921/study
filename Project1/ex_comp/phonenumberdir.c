#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10

typedef struct{
    char name[20];
    char phoneNum[12];
}PhoneNumber;

typedef struct{
    PhoneNumber* phoneNumbers[SIZE];
    int curIdx;
}PhoneNumberDirectory;

typedef struct _node{
    PhoneNumber number;
    struct _node* next;
}PhoneNumberNode;

void initPhoneDirectory(PhoneNumberDirectory* directory, int size){
    directory->curIdx=0;
}

void addPhoneInformation(PhoneNumberDirectory* directory, const char* name, const char* phoneNum){
    directory->phoneNumbers[directory->curIdx]=(PhoneNumber*)malloc(sizeof(PhoneNumber));
    strcpy(directory->phoneNumbers[directory->curIdx]->name,name);
    strcpy(directory->phoneNumbers[directory->curIdx]->phoneNum,phoneNum);
    directory->curIdx++;
}

void removePhoneInformation(PhoneNumberDirectory* directory, const char* name){
    int idx = -1;
    for(int i=0; i<directory->curIdx; i++){
        if(strcmp(directory->phoneNumbers[i]->name,name)==0){
            idx = i;
            break;
        }
    }
    if(idx>=0){
        free(directory->phoneNumbers[idx]);
        for(int i=idx+1; i<directory->curIdx; i++){
            directory->phoneNumbers[i-1]=directory->phoneNumbers[i];
        }
        directory->curIdx--;
    }
}
void printPhoneDirectory(const PhoneNumberDirectory* directory){
    for(int i=0; i<directory->curIdx; i++){
        printf("name : %s\n",directory->phoneNumbers[i]->name);
        printf("number : %s\n",directory->phoneNumbers[i]->phoneNum);
    }
}

void destroyPhoneDirectory(PhoneNumberDirectory* directory){
    for(int i=0; i<directory->curIdx; i++){
        free(directory->phoneNumbers[i]);
    }

}
PhoneNumberNode* addPhoneInformation_Node(PhoneNumberNode* head, const char* name, const char* phoneNum){
    PhoneNumberNode* pNode = (PhoneNumberNode*) malloc(sizeof(PhoneNumberNode));
    if(pNode != NULL){
        strcpy(pNode->number.name, name);
        strcpy(pNode->number.phoneNum, phoneNum);
        pNode->next = NULL;
        if(head == NULL){
            head = pNode;
        }
        else{
            PhoneNumberNode* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = pNode;
        }
    }
    return head;
}
PhoneNumberNode* removePhoneInformation_Node(PhoneNumberNode* head, const char* name){
    //첫번째 요소 삭제하는 경우, head값을 두번째 노드의 주소로 바꾸면됨.
    //그 이상인경우, 바로 앞 노드에 next값을 물려줌.
    //
    PhoneNumberNode* temp = head;
    PhoneNumberNode* prev = NULL;
    while (temp != NULL){
        if(strcmp(temp->number.name,name)==0){
            if(prev == NULL){
                head = temp->next;
            }
            else{
                prev->next = temp->next;
            }
            free(temp);
            break;
        }
        else{
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
    
}

PhoneNumberNode* destroyPhoneDirectory_Node(PhoneNumberNode* head){
    PhoneNumberNode* temp = head;
    PhoneNumberNode* prev = NULL;
    while(temp!=NULL){
        prev = temp;
        temp = temp->next;
        free(prev);
    }
    return NULL;
}

int main(){
    PhoneNumberDirectory directory;
    
    initPhoneDirectory(&directory, SIZE);
    addPhoneInformation(&directory, "bae jun bum1", "01089524095"); 
    addPhoneInformation(&directory, "bae jun bum2", "01012345678"); 
    addPhoneInformation(&directory, "bae jun bum3", "01098765432"); 
    printPhoneDirectory(&directory);
    removePhoneInformation(&directory, "bae jun bum2");
    printPhoneDirectory(&directory);
    destroyPhoneDirectory(&directory);
    return 0;

}