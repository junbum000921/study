#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARR_SIZE(arr, element)(sizeof(arr) / sizeof(element))	// 배열의 크기를 구하는 매크로

void printTVSize(double size){
	printf("TV size : %.1f cm\n", size);
}

int main(void) {
	// 14. 매크로 사용 예제
	double tvSize[] = { 32 * 2.54, 42* 2.54, 50* 2.54, 65* 2.54 };
	for (int i = 0; i < ARR_SIZE(tvSize, double); i++) {
		printTVSize(tvSize[i]);
	}

	return 0;
}