//#include <stdio.h>
//int main() {
//	char code1 = 'A'; //문자 상수 문자 하나 쓸 때는 홑따옴표로''문자열은 겹따옴표""
//	//char code1 = 'AB' 오류
//	//char code1 = ' ' 공백 문자 포함 ㅇㅇ
//	char code2 = 65; //아스키코드
//	printf("code1 = %c\n", code1);
//	printf("code2 = %c\n", code2);
//
//	//p.155 char.c 내용
//	char code = 'A';
//	printf("%d %d %d\n", code, code + 1, code + 2);
//	printf("%c %c %c\n", code, code + 1, code + 2);
//	printf("%d %c\n", 65, 65);
//}

//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//// p.162 예제 3번
//int main() {
//	int x = 10, y = 20, tmp;
//	printf("x=%d y=%d\n", x, y);
//	tmp = x;
//	x = y;
//	y = tmp;
//	printf("x=%d y=%d\n", x, y);
//	return 0;
//}

//// p.163 예제 8번
//int main() {
//	int code;
//	printf("아스키 코드값을 입력하시오: ");
//	scanf("%d", &code);
//	printf("문자: %c입니다.", code);
//}

////p.163번 예제 9번
//int main() {
//	char code = 'a';
//	printf("%c %c %c\n", code+1, code+2, code+3);
// }

////p.163번 예제 11번
//int main() {
//	char code = 'A';
//	printf("\"ASCII code\",\'A\', \'B\', \'C\' \n");
//	printf("\\t, \\a, \\n");
//}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main() {
	char ch;
	printf("문자 입력:");
	ch = getchar(); // scanf("%c", &ch); //문자 입력받는 방법 2가지	
	if (ch >= 'A' && ch <= 'Z')
		printf("%c 대문자 \n", ch);
	else if (ch >= 'a' && ch <= 'z')	
		printf("%c 소문자 \n", ch);
	else if (ch >= '0' && ch <= '9')
		printf("%c 숫자 \n", ch);
	else
		printf("%c 기타 문자 \n", ch);
}