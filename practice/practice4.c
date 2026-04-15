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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0 || i % 10 == 3 || (i / 10) % 10 == 3)
			continue;
		printf("%d ", i);

	}
	printf("\n");
}