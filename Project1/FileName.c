#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int column = 0;
	int a;
	int i, j;

	printf("2 이상의 정수를 입력 : ");
	scanf("%d", &a);

	for (i = 2; i <= a; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) break;
		}
		if(j == i) {
			printf("%5d", i);
			column++;
			//5개마다 줄바꿈 처리
			if (column == 5) {
				column = 0;
				printf("\n");
			}
		}
	}
}