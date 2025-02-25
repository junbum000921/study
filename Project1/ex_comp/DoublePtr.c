#include <stdio.h>

void changeValues(int **pptr){
    for(int i=0; i<3; i++){
        **(pptr + i)+=10;
    }
}

int main(){
    int nums[3] = {1,2,3};
    int *ptr[3];
    int **pptr = ptr;

    for (int i=0; i<3; i++){
        ptr[i] = &nums[i];
    }

    printf("Before change\n");
    for(int i=0; i<3; i++){
        printf("nums[%d] : %d\n",i,nums[i]);
    }
    printf("\n");

    changeValues(pptr);

    printf("After change\n");
    for(int i=0; i<3; i++){
        printf("nums[%d] : %d\n",i,nums[i]);
    }
    return 0;
}