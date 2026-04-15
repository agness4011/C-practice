//260415 p.291 이후 (C Express07 반복문)
//while, do whie, for
//1~10까지 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//	}
//	printf("\n");
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i=1;
//	while (i <= 10) {
//		printf("%d", i);
//		i++;
//	}
//	printf("\n");
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 1;
//	do {
//		printf("%d", i);
//		i++;
//
//	} while (i <= 10);
//	printf("\n");
//}

//10부터 1까지 역순으로 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 10; i >= 1; i--) {
//		printf("%d ", i);
//	}
//	printf("\n");
//	
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 10;
//	while (i >= 1) {
//		printf("%d", i);
//		i--;
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i = 10;
//	do {
//		printf("%d", i);
//		i--;
//	} while (i >= 1);
//	printf("\n");
//}


//1~10~1까지 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 1; i <= 10; i++) {
//		printf("%d ", i);
//
//	}
//	for (i = 9; i >= 1; i--) {
//		printf("%d ", i);
//
//	}
//
//}

//p.309 8번 문제 
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//을 출력하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 5; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//}

//정수 나누기 정수는 정수이다
//앞에 형변환을 해야함!!!

//%2d로 출력할 때 1자리 수는 공백이 하나 붙어서 출력됨
//"%d " d뒤에 한 칸 띄어쓰기 해야 공백 포함
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	for (int y = 1; y <= 10; y++) {
//		for (int x = 1; x <= 10; x++) {
//			printf("%d ", x);
//		}
//
//		printf("\n");
//		
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 10; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &i);
//	for (int k = 1; k <= i; k++) {
//		for (j = 1; j <= k; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//}

//시험에 별 대신에 숫자 찍는 게 나올수도 안 나올수도 있음
//p.292 
//주사위 2개를 던졌을 때, 모든 경우의 수를 출력
//(1, 1) (1, 2) (1, 3) (1, 4) (1, 5) (1, 6) (2, 1) (2, 2) (2, 3) (2, 4) (2, 5) (2, 6) ... (6, 6)
//대신 줄 바꿈해야 함

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 6; i++) {
//		for (j = 1; j <= 6; j++) {
//			printf("(%d, %d) ", i, j);
//			printf("\n");
//		}
//	}
//}

//주사위 2개를 던졌을 때, 합이 6이 되는 경우를 모두 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j;
//	for (i = 1; i <= 6; i++) {
//		for (j = 1; j <= 6; j++) {
//			if (i + j == 6) {
//				printf("(%d, %d)", i, j);
//				printf("\n");
//			}
//		}
//	}
//}
//주사위 3개를 던졌을 때, 합이 10이 되는 경우를 모두 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i, j, k;
//	for (i = 1; i <= 6; i++) {
//		for (j = 1; j <= 6; j++) {
//			for (k = 1; k <= 6; k++) {
//				if (i + j + k == 10) {
//					printf("(%d, %d, %d)", i, j, k);
//					printf("\n");
//				}
//			}
//		}
//	}
//}

//p.294 break 문~
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define SEED_MONEY 1000000
//int main() {
//	int year = 0, money = SEED_MONEY;
//	while (1) {
//		year++;
//		money += money * 0.30;
//		if ( money > 10 * SEED_MONEY)
//			break;
//	}
//	printf("%d년", year);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int num, sum = 0;
//	while (1) { //1(0이 아닌 수)는 참이르모 무한 loop
//		printf("정수: ");
//		scanf("%d", &num);
//		if (num == 0)
//			break;
//		sum += num;
//	}
//	printf("sum = %d\n", sum);
//}

//0 제외한 정수 개수를 카운트, 평균(실수값)도 출력하는 프로그램
//go to 쓰면 시험 빵점임 
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int num, count = 0, sum = 0;
//	float average;
//	while (1) {
//		printf("정수: ");
//		scanf("%d", &num);
//		if (num == 0)
//			break;
//		sum += num;
//		count++;
//	}
//	if (count > 0) {
//		average = (float)sum / count; 
//		printf("count = %d, average = %.2f\n", count, average);
//	}
//	else {
//		printf("입력된 정수가 없습니다.\n");	
//	}
//}

//p.296~ continue 문
//0부터 10까지의 정수 중 3의 배수만 제외하고 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 0; i < 10; i++) {
//		if (i % 3 == 0)
//			continue;
//		printf("%d ", i);
//	}
//	printf("\n");
//}

//p.296~ continue 문
//해당 문제를 continue 문 없이 풀어보기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 0; i < 10; i++) {
//		if (i % 3 != 0) {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//
//}

//p.296~ continue 문
// 1~100 중에서 3의 배수, 1의 자리가 3, 10의 자리가 3인 수를 제외하고 출력
//이런 느낌으로 문제 나올 수 있으!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 1; i <= 100; i++) {
//		if (i % 3 == 0 || i % 10 == 3 || (i / 10) % 10 == 3)
//			continue;
//		printf("%d ", i);
//
//	}
//	printf("\n");
//}

//3, 6, 9 게임 출력하는 프로그램
// 각 자리수에 3, 6, 9가 있으면 그 자리 수마다 "짝"을 출력
// 그냥 한 거긴 함 시험에 나올까? 나오면 좀...
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int i;
//	for (i = 1; i <= 100; i++) {
//		int count = 0;
//		if (i % 3 == 0)
//			count++;
//		if (i % 10 == 3)
//			count++;
//		if ((i / 10) % 10 == 3)
//			count++;
//		if (count > 0) {
//			for (int j = 0; j < count; j++) {
//				printf("짝");
//			}
//			printf(" ");
//		}
//		else {
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//}

//p.302 자동으로 수학 문제 생성하기
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

//p.308 4번 사용자가 입력한 자연수의 모든 약수를 출력하는 프로그램
//자연수가 아니면 다시 입력하게
//do while을 사용해서 범위 아니면 다시 입력하는 식으로 문제 나옴 (짝수, 1~100 등)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int n;
//	do {
//		printf("자연수: ");
//		scanf("%d", &n);
//
//	} while (n < 1);
//	//n의 모든 약수를 출력
//	//1부터 n까지의 수 중에서 n을 나누어 떨어뜨리는 수가 약수
//	if (n >= 1) {
//		for (int i = 1; i <= n; i++) {
//			if (n % i == 0) {
//				printf("%d ", i);
//			}
//		}
//	}
//}
//
//자연수를 입력 받아(자연수가 아니면 다시 입력) 소수인지를 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int n, isPrime = 1; //isPrime이 1이면 소수, 0이면 소수 아님
	do {
		printf("자연수: ");
		scanf("%d", &n);
	} while (n < 1);
	if (n == 1) {
		isPrime = 0; //1은 소수가 아님
	}
	else {
		for (int i = 2; i <= n / 2; i++) { //2부터 n/2까지의 수 중에서 n을 나누어 떨어뜨리는 수가 있으면 소수가 아님
			if (n % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}
	if (isPrime)
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
}

//10번 2~100 사이에 있는 모든 소수를 출력하는 프로그램
//2부터 n-1까지 나누어떨어지지 않음
//소수 개수도 출력
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//int main() {
//	int count = 0;
//	for (int n = 2; n <= 100; n++) {
//		int isPrime = 1; 
//		for (int i = 2; i <= n / 2; i++) { 
//			if (n % i == 0) {
//				isPrime = 0;
//				break;
//			}
//		}
//		if (isPrime) {
//			printf("%d ", n);
//			count++;
//		}
//	}
//	printf("\n소수 개수: %d\n", count);
//}





//p.26~27~ 1~2장 ppt 참고
//컴퓨터가 알아듣는 건 기계어밖에 없다.
//C언어가 기계어로 바꾸는 것을 컴파일이라고 한다!
//오브젝트 파일은 기계어로 되어 있음, 소스 프로그램을 오브젝트 파일로 변환하는 작업
//오브젝트 파일은 혼자서 실행할 수 없다 + 소스 코드를 컴파일 -> 오브젝트 파일 나옴, 여러 오브젝트 파일과 라이브러리를 링크해서 실행 파일이 만들어지고 실행 파일이 컴퓨터에서 실행됨
//printf, scanf, getchar, putchar, rand 등은 라이브러리 함수 
//.exe는 실행 파일, .c는 소스 파일, .obj는 오브젝트 파일 
//print라고 치면 링크에러
//컴파일러 전에 전처리기가 먼저 실행됨. #include, #define, #ifdef 등은 전처리 지시자
//전처리기가 처리한 결과는 컴파일러로, 그 이후 오브젝트 파일이 나오고, 라이브러리랑 링크해서 실행 파일이 만들어짐

//연습문제 16번 풀어라(양수만 생각해)