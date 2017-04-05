#include <stdio.h>

int main(void) {
	char input[1001];
	printf("입력한 문자의 갯수를 세는 프로그램입니다. 문자를 입력하고 엔터를 누세요.\n");
	gets(input);
	int count = 0;
	
	while(input[count] != '\0') {
		count++;
	}
	printf("입력된 문자의 길이는 %d입니다.\n", count);
	printf("입력한 문자열 : %s", input) ;
	return 0;	 
} 
