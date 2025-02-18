#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "ex1.h"
#define SWAP_INT(x, y)\
	int t = (x);\
	(x) = (y);\
	(y) = t;
#define NUM 30
#define SIZE 5
int randint(int x, int y) {
	return rand() % (y - x - 1) + x;
}
int isPrimeNumber(int m) {

	if (m < 2) {
		return 0;
	}
	else if (m == 2) {
		return 1;
	}
	else if (m % 2 == 0) {
		return 0;
	}
	for (int i = 3; i < m; i += 2) {
		if (m % i == 0) {
			return 0;
		}
	}
	return 1;
}

void inc_time(int hour, int minute) {
	if (minute == 60) {
		minute = 0;
		hour++;
		if (hour == 24) {
			hour = 0;
		}
	}
	else {
		minute++;
	}
}

int sub(int a, int b) {
	return a - b;
}

int add(int a, int b) {
	return a + b;
}

int mult(int a, int b) {
	return a * b;
}
int divide(int a, int b) {
	return a / b;
}

void printQuadEqnSoln(int a, int b, int c) {
	double r = sqrt(b * b - 4 * a * c);
	double x1 = (-b + r) / (2 * a);
	double x2 = (-b - r) / (2 * a);
	printf("x1 = %f, x2 = %f\n", x1, x2);

}

int sum1toN(int n) {
	if (n == 0) { return 0; }
	return sum1toN(n - 1) + n;
}

int globalarr[4];
int main(void) {
	/*int a = 5;
	int b = 6;
	SWAP_INT(a, b);
	printf("%d %d", a, b);*/
	/*#define PI 3.14159
	printf("PI = %f\n", PI);

	#define MAX(x, y) ((x)>(y) ? (x) : (y))
	printf("MAX(3,5) = %d", MAX(3, 5));*/
	/*int number[16] = {0,};
	printf("ī���ȣ �Է� : ");
	for (int i = 0; i < 16; i++) {
		scanf("%1d", &number[i]);
	}
	printf("ī���ȣ�� ");
	for (int i = 0; i < 16; i++) {
		if (i % 4 == 0 && i != 0) {
			printf("-");
		}
		printf("%d", number[i]);
	}
	printf("�Դϴ�.\n");*/
	/**/
	/*int n = 4;
	int nums[100];
	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;
	for (int i = 0; i < 4; i++) {
		printf("%d %d\n", nums[i], sizeof(nums[i])/sizeof(int));
		printf("%d\n", sizeof(nums));
	}*/

	/*static int staticarr[4];
	int localarr[4];
	for (int i = 0; i < 4; i++) {
		printf("global : %d, static : %d,local : %d ", globalarr[i],staticarr[i],localarr[i]);
	}*/

	/*srand(time(NULL));
	int secnums[NUM];
	for (int i = 0; i < NUM; i++) {
		secnums[i] = randint(1000, 9999);
	}
	for (int i = 0; i < NUM; i++) {
		printf("Security Nums = %d\n", secnums[i]);
	}*/
	int num1[SIZE] = {1,2};
	int num2[SIZE] = { 1,2,3,4 };
	




	///*
	//int n = -232323;
	//unsigned int u = 23234232;

	//printf("n=-232323\n");
	//printf("u=23234232\n\n");

	//printf("n (%%10d): %10d\n", n);
	//printf("string (%%10s): %10s\n", "hello");
	//printf("n (%%5d): %5d\n", n);
	//printf("string (%%3s): %3s\n", "hello");

	//printf("n (%%-10d): %-10d\n", n);
	//printf("n (%%010d): %010d\n", n);
	//printf("u (%%-+10u) : %-+10u\n", u);
	//printf("u (%%+010u) : %+010u\n", u);
	//printf("u (%%+10u) : %+10u\n", u);
	//printf("u (%%-10u) : %-10u\n", u);

	//printf("n (%%.5d) : %.5d\n", n);
	//printf("n (%%.10d) : %.10d\n", n);

	//float f = 23.2239f;
	//double d = 23.2323232323;
	//double d2 = 23.3E10;
	//double d3 = 23.3E-5;

	//printf("\nf=23.2239\n");
	//printf("d=23.2323232323\n");
	//printf("d2=23.3E10\n");
	//printf("d3=23.3E-5\n");

	//printf("f (%%f) = %f\td (%%f) = %f\n", f, d);
	//printf("d (%%g) = %g\td2 (%%g) = %g\td3 (%%g) = %g\n\n", d, d2, d3);

	//printf("address of n (%%p) = %p\n", &n);
	//printf("address of n (%%u) = %u\n", &n);
	//printf("address of n (%%u) = %x\n", &n);

	//long num1 = 32132113561;
	//long num2 = 12354654321;
	//unsigned long unum1 = 6555555445;
	//long long lnum1 = 6465451513213513511LL;
	//unsigned long long lnum2 = 6465451513213513511ull;

	//printf("num1 = %20ld\n", num1);
	//printf("num2 = %20lu\n", num2);
	//printf("lnum1 = %lld\n", lnum1);
	//printf("lnum2 = %llu\n", lnum2);
	//*/
	///*char c = -120;
	//short s = 300;
	//int i = -20000;
	//long l = 100l;
	//long long ll = 1000ll;

	//s = c;
	//i = s;
	//l = i;
	//ll = l;
	//printf("c = %d, s = %d, i = %d, l = %ld, ll = %lld\n", c, s, i, l, ll);

	//float f = 2323232323232.332611f;
	//double d = f;
	//printf("f=%f, d = %f\n", f, d);
	//printf("size of long = %d\nsize of long long = %d\n", sizeof(l), sizeof(ll));

	//typedef long long int llint;

	//llint n = 56165484654;
	//float m = 5234.431545245;
	//printf("%lld\n",n);
	//printf("%f\n", m);*/

	///*const double GA = 9.8;
	//enum MONTH {
	//	JANUARY = 1, FEBUARY = 2
	//};
	//enum MONTH m = FEBUARY;
	//printf("%d", m);*/

	///* enum NUM { NUM1 = 2, NUM2, NUM3 };
	// enum NUM a = NUM1;
	// enum NUM b = NUM2;
	// enum NUM c = NUM3;
	// printf("%d", a);
	// printf("%d\n", b);
	// printf("%d\n", c);
	// printf(MSG);*/
	// /*unsigned n1 = 0x9fffffff;
	// int n2 = 0x9fffffff;

	// printf("n1=%x, n1=%u\n", n1, n1);
	// printf("n2=%x, n2=%d\n", n2, n2);
	// printf("%ld\n", (1 << 31) - 1);
	// n1 = n1 << 1;
	// n2 = n2 << 1;

	// printf("n1=%x, n1=%u\n", n1, n1);
	// printf("n2=%x, n2=%d\n", n2, n2);*/

	// /***int x = 0xf00ab0a0;
	// int y = 0x0fc00d0d;
	// int xXory = x ^ y;
	// printf("%x\n", xXory);
	// int n1 = 4;
	// int n2 = 6;
	// printf("%d\n", n1++);
	// printf("%d\n", ++n1);
	// int a, b, c;
	// a = (b = 4, c = 5);
	// printf("%d,%d,%d\n",a,b,c);**/
	// /*for (int first = 1, second = 9; first < second; first++, second--) {
	//	 printf("%d, %d\n", first, second);
	// }*/

	///*int n1, n2;
	//char c;
	//printf("���� �ΰ��� ���� �ϳ� �Է�\n");
	//scanf("%d%d %c", &n1, &n2, &c);
	//printf("%d %d %c", n1, n2, c);*/
	///*int n1, n2, n3;
	//scanf("%d-%d-%d", &n1, &n2, &n3);
	//printf("n1 : %03d, n2 : %04d, n3 : %04d\n", n1, n2, n3);*/
	///*int ch = getchar();
	//printf("%c\n", ch);
	//int c = getchar();
	//printf("%c", c);*/
	///*int ch = getc(stdin);
	//printf("%c\n", ch);
	//ch = getc(stdin);
	//printf("%c\n",ch);*/
	///**putchar('!');
	//putchar('a');
	//putchar('?');*/
	//puts("Hello, world!");
	//puts("I want to go home.");
	/*typedef enum Membership { NONE, SILVER, GOLD, PLATINUM };
	Membership membership = GOLD;
	int time = 30;
	int free = (membership == GOLD || membership == PLATINUM) && (time < 120);
	printf("���� ����? : %d\n", free);*/
	/*srand(time(NULL));
	int chance = rand()%101;
	if (chance > 25) {
		printf("�� �� Ȯ���� %d%% �Դϴ�. ����� ì��ž� �մϴ�.\n", chance);
	}
	else {
		printf("�� �� Ȯ���� %d%�Դϴ�. ��å ����.\n", chance);
	}*/
	/*int n;
	printf("���� �ϳ� �Է�.\n");
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("%d�� ¦���Դϴ�.\n", n);
	}
	else {
		printf("%d�� Ȧ���Դϴ�.\n", n);

	}*/
	/**int divisor = 1;
	int n;
	printf("���� �Է� : ");
	scanf("%d", &n);
	if (n >= 1) {
		printf("%d�� ����� ", n);
		do {
			
			if (n % divisor == 0) {
				printf("%d ", divisor);
			}
			divisor++;
		}while(divisor <= n);
		printf("�Դϴ�.\n");
	}
	else {
		printf("1 �̸��� ������ �Էµ˴ϴ�. ���α׷��� �����մϴ�.\n");
	}*/
	/*char ch;
	char newlinchar;
	int first = 1;
	do {
		if (first) {
			printf("���� �Է� : ");
			first = 0;
		}
		else {
			printf("��� �ƴմϴ�. �ٽ� �Է� �� �ּ���.\n");
		}
		scanf("%c", &ch);
		scanf("%c", &newlinchar);
	}while ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z'));
	printf("ch = %c\n", ch);*/
	
	//int x = 5;
	//int y = 9;
	//int* xp = &x;
	//int* yp = &y;

	//swap(xp,yp);
	//printf("x = %d, y = %d", x, y);
	//
	
	//int n;
	//scanf("%d", &n);
	//int ans = isPrimeNumber(n);
	//if (ans == 1) {
	//	printf("%d�� �Ҽ��Դϴ�.", n);
	//}
	//else {
	//	printf("%d�� �Ҽ��� �ƴմϴ�.", n);
	//}
	
	//int x = 7;
	//printf("%d\n", x);
	//for (int i = 0; i < 2; i++) {
	//	printf("%d\n", x);
	//	int x = 9;
	//	
	//}
	//printf("%d\n", x);

	return 0;
}




