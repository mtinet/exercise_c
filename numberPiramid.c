#include <stdio.h>

// 반복함수를 이용해서 숫자 피라미드를 출력합니다. 
// 반복함수는 오직 for문과 while문으로 구성됩니다. 

int print(int a) {
	int i, j;
	for(i = 0; i < a; i++) {
		for(j = 0; j <= i; j++) {
			printf("%d", j + 1);
		}
		printf("\n");		
	}
}

int main(void) {
	int a;
	printf("피라미드를 만들 숫자크기를 입력하세요 : ");
	scanf("%d", &a);
	printf("\n");
	print(a);
	return 0;
}
