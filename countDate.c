#include <stdio.h>

int getDays(int month, int day) {
	int i, sum = 0;
	for(i = 1; i < month; i++) {
		if( i == 2) { // 이 프로그램에서는 윤년을 감안하지 않습니다.  
			sum += 28;
		} 
		else if (i % 2 == 0) {
			sum += 30;
		}
		else {
			sum += 31;
		}
	}
	return sum + day;
}

int main(void) {
	int month, day;
	printf("이 프로그램은 1월 1일부터 원하는 날짜까지의 차이를 구하는 프로그램입니다.\n");
	
	printf("월을 입력하세요 : ");
	scanf("%d", &month);
	printf("일을 입력하세요 : ");
	scanf("%d", &day);
	
	printf("1월 1일부터 해당 날짜까지의 거리는 %d입니다", getDays(month,day));
	return 0;
}
